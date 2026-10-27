# 디지털시스템설계 (Digital System Design)

Vivado 프로젝트에서 소스(`.v`), 테스트벤치, 제약 파일(`.xdc`)만 모아 둔 폴더입니다.
빌드 결과물(`.runs`, `.sim`, `.cache`, `.bit` 등)은 포함하지 않았습니다.

- Board: Digilent Nexys A7-100T (`xc7a100tcsg324-1`)
- Clock: `CLK100MHZ` (100 MHz)
- Tool: Xilinx Vivado

```
디지털시스템설계/
├── stopwatch/        # 스톱워치 (HH:MM:SS.cc, 8-digit 7-segment)
│   ├── src/
│   └── constraints/
└── dice/             # 2-digit 주사위 카운터
    ├── src/
    ├── sim/
    └── constraints/
```

## stopwatch

Top module: `top_watch`

| 파일 | 모듈 | 설명 |
|---|---|---|
| `top_watch.v` | `top_watch` | Top. 버튼 동기화/엣지 검출, start/stop 토글, 7-seg 출력 연결 |
| `sw_core.v` | `sw_core` | 1/100초 ~ 시간 자리 카운터 체인 (23 → 00 클리어) |
| `clk_div.v` | `clk_div` | `cnt10` 6단으로 100 kHz / 1 kHz / 100 Hz enable 생성 |
| `cnt10.v` | `cnt10` | mod-10 카운터 (`clr` 포함) |
| `cnt6.v` | `cnt6` | mod-6 카운터 |
| `cnt3.v` | `cnt3` | mod-3 카운터 (`clr` 포함) |
| `seg_driver.v` | `seg_driver` | 8-digit 7-segment 다이내믹 구동 (1 ms 주기 스캔) |
| `tff.v` | `tff` | T flip-flop (start/stop 토글) |

- `BTNC`: start / stop
- `SW[1]`: 1 → 100 kHz로 빠르게 증가(테스트용), 0 → 100 Hz 정상 속도
- `CPU_RESETN`: 동기 reset

```
top_watch
├── clk_div ── cnt10 ×6
├── sw_core ── cnt10 ×5, cnt6 ×2, cnt3 ×1
├── seg_driver
└── tff
```

## dice

Top module: `dice_top` / Simulation top: `bcd_tb`

| 파일 | 모듈 | 설명 |
|---|---|---|
| `src/dice_top.v` | `dice_top` | Top. 주사위 2개 값을 7-seg 하위 2자리에 표시, `BTNC`로 정지/재개 |
| `src/bcd_8digits.v` | `bcd_8digit` | `bcd_count` 7단 체인 (enable 신호 생성용) |
| `src/bcd_count.v` | `bcd_count` | mod-10 BCD 카운터 |
| `src/bcd.v` | `bcd` | 1~6 카운터 (주사위 눈) |
| `src/tff.v` | `tff` | T flip-flop |
| `src/seg_driver.v` | `seg_driver` | 8-digit 7-segment 다이내믹 구동 |
| `src/en_1s.v` | `en_1s` | enable 생성 카운터 (Vivado 프로젝트에는 미포함) |
| `sim/bcd_tb.v` | `bcd_tb` | `bcd_8digit` 테스트벤치 |

### 참고 (원본 상태 그대로 옮김)

- `bcd.v`, `tff.v`는 원본 파일에서 모듈 전체가 `/* ... */` 주석 처리되어 있습니다.
  이 상태로는 `dice_top`이 합성되지 않으니, 다시 빌드하려면 주석을 해제해야 합니다.
- `bcd_tb.v`의 `bcd_8digit` 인스턴스 포트 구성이 현재 `bcd_8digit` 정의(`Q0~Q6, TC, tc6, ...`)와 다릅니다.
- 원본 폴더에 있던 빈 모듈 파일 `t-ff.v`, `cnt_mod.v`는 프로젝트에 등록되지 않은 빈 껍데기라 제외했습니다.
