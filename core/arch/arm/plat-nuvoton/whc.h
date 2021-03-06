// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2020 Nuvoton Technology Corp. All rights reserved.
 */
#ifndef __WHC_H__
#define __WHC_H__

#define WKCTL			0x000
#define INTEN			0x004
#define INTSTS			0x008
#define CPSTS			0x040
#define GINTTRG			0x080
#define TXCTL			0x0C0
#define TXSTS			0x0C4
#define RXCTL			0x0C8
#define RXSTS			0x0CC
#define TMDAT(x, y)		(0x100 + ((x) * 0x10) + ((y) * 0x4))
#define RMDAT(x, y)		(0x200 + ((x) * 0x10) + ((y) * 0x4))

#define WHC_WKCTL_RST0WKEN_Pos              (0)
#define WHC_WKCTL_RST0WKEN_Msk              (0x1ul << WHC_WKCTL_RST0WKEN_Pos)

#define WHC_WKCTL_POFF0WKEN_Pos             (1)
#define WHC_WKCTL_POFF0WKEN_Msk             (0x1ul << WHC_WKCTL_POFF0WKEN_Pos)

#define WHC_WKCTL_PD0WKEN_Pos               (2)
#define WHC_WKCTL_PD0WKEN_Msk               (0x1ul << WHC_WKCTL_PD0WKEN_Pos)

#define WHC_WKCTL_RST1WKEN_Pos              (3)
#define WHC_WKCTL_RST1WKEN_Msk              (0x1ul << WHC_WKCTL_RST1WKEN_Pos)

#define WHC_WKCTL_POFF1WKEN_Pos             (4)
#define WHC_WKCTL_POFF1WKEN_Msk             (0x1ul << WHC_WKCTL_POFF1WKEN_Pos)

#define WHC_WKCTL_PD1WKEN_Pos               (5)
#define WHC_WKCTL_PD1WKEN_Msk               (0x1ul << WHC_WKCTL_PD1WKEN_Pos)

#define WHC_WKCTL_GI0WKEN_Pos               (8)
#define WHC_WKCTL_GI0WKEN_Msk               (0x1ul << WHC_WKCTL_GI0WKEN_Pos)

#define WHC_WKCTL_GI1WKEN_Pos               (9)
#define WHC_WKCTL_GI1WKEN_Msk               (0x1ul << WHC_WKCTL_GI1WKEN_Pos)

#define WHC_WKCTL_GI2WKEN_Pos               (10)
#define WHC_WKCTL_GI2WKEN_Msk               (0x1ul << WHC_WKCTL_GI2WKEN_Pos)

#define WHC_WKCTL_GI3WKEN_Pos               (11)
#define WHC_WKCTL_GI3WKEN_Msk               (0x1ul << WHC_WKCTL_GI3WKEN_Pos)

#define WHC_WKCTL_TX0WKEN_Pos               (16)
#define WHC_WKCTL_TX0WKEN_Msk               (0x1ul << WHC_WKCTL_TX0WKEN_Pos)

#define WHC_WKCTL_TX1WKEN_Pos               (17)
#define WHC_WKCTL_TX1WKEN_Msk               (0x1ul << WHC_WKCTL_TX1WKEN_Pos)

#define WHC_WKCTL_TX2WKEN_Pos               (18)
#define WHC_WKCTL_TX2WKEN_Msk               (0x1ul << WHC_WKCTL_TX2WKEN_Pos)

#define WHC_WKCTL_TX3WKEN_Pos               (19)
#define WHC_WKCTL_TX3WKEN_Msk               (0x1ul << WHC_WKCTL_TX3WKEN_Pos)

#define WHC_WKCTL_RX0WKEN_Pos               (24)
#define WHC_WKCTL_RX0WKEN_Msk               (0x1ul << WHC_WKCTL_RX0WKEN_Pos)

#define WHC_WKCTL_RX1WKEN_Pos               (25)
#define WHC_WKCTL_RX1WKEN_Msk               (0x1ul << WHC_WKCTL_RX1WKEN_Pos)

#define WHC_WKCTL_RX2WKEN_Pos               (26)
#define WHC_WKCTL_RX2WKEN_Msk               (0x1ul << WHC_WKCTL_RX2WKEN_Pos)

#define WHC_WKCTL_RX3WKEN_Pos               (27)
#define WHC_WKCTL_RX3WKEN_Msk               (0x1ul << WHC_WKCTL_RX3WKEN_Pos)

#define WHC_INTEN_RST0IEN_Pos               (0)
#define WHC_INTEN_RST0IEN_Msk               (0x1ul << WHC_INTEN_RST0IEN_Pos)

#define WHC_INTEN_POFF0IEN_Pos              (1)
#define WHC_INTEN_POFF0IEN_Msk              (0x1ul << WHC_INTEN_POFF0IEN_Pos)

#define WHC_INTEN_PD0IEN_Pos                (2)
#define WHC_INTEN_PD0IEN_Msk                (0x1ul << WHC_INTEN_PD0IEN_Pos)

#define WHC_INTEN_RST1IEN_Pos               (3)
#define WHC_INTEN_RST1IEN_Msk               (0x1ul << WHC_INTEN_RST1IEN_Pos)

#define WHC_INTEN_POFF1IEN_Pos              (4)
#define WHC_INTEN_POFF1IEN_Msk              (0x1ul << WHC_INTEN_POFF1IEN_Pos)

#define WHC_INTEN_PD1IEN_Pos                (5)
#define WHC_INTEN_PD1IEN_Msk                (0x1ul << WHC_INTEN_PD1IEN_Pos)

#define WHC_INTEN_GI0IEN_Pos                (8)
#define WHC_INTEN_GI0IEN_Msk                (0x1ul << WHC_INTEN_GI0IEN_Pos)

#define WHC_INTEN_GI1IEN_Pos                (9)
#define WHC_INTEN_GI1IEN_Msk                (0x1ul << WHC_INTEN_GI1IEN_Pos)

#define WHC_INTEN_GI2IEN_Pos                (10)
#define WHC_INTEN_GI2IEN_Msk                (0x1ul << WHC_INTEN_GI2IEN_Pos)

#define WHC_INTEN_GI3IEN_Pos                (11)
#define WHC_INTEN_GI3IEN_Msk                (0x1ul << WHC_INTEN_GI3IEN_Pos)

#define WHC_INTEN_TX0IEN_Pos                (16)
#define WHC_INTEN_TX0IEN_Msk                (0x1ul << WHC_INTEN_TX0IEN_Pos)

#define WHC_INTEN_TX1IEN_Pos                (17)
#define WHC_INTEN_TX1IEN_Msk                (0x1ul << WHC_INTEN_TX1IEN_Pos)

#define WHC_INTEN_TX2IEN_Pos                (18)
#define WHC_INTEN_TX2IEN_Msk                (0x1ul << WHC_INTEN_TX2IEN_Pos)

#define WHC_INTEN_TX3IEN_Pos                (19)
#define WHC_INTEN_TX3IEN_Msk                (0x1ul << WHC_INTEN_TX3IEN_Pos)

#define WHC_INTEN_RX0IEN_Pos                (24)
#define WHC_INTEN_RX0IEN_Msk                (0x1ul << WHC_INTEN_RX0IEN_Pos)

#define WHC_INTEN_RX1IEN_Pos                (25)
#define WHC_INTEN_RX1IEN_Msk                (0x1ul << WHC_INTEN_RX1IEN_Pos)

#define WHC_INTEN_RX2IEN_Pos                (26)
#define WHC_INTEN_RX2IEN_Msk                (0x1ul << WHC_INTEN_RX2IEN_Pos)

#define WHC_INTEN_RX3IEN_Pos                (27)
#define WHC_INTEN_RX3IEN_Msk                (0x1ul << WHC_INTEN_RX3IEN_Pos)

#define WHC_INTSTS_RST0IF_Pos               (0)
#define WHC_INTSTS_RST0IF_Msk               (0x1ul << WHC_INTSTS_RST0IF_Pos)

#define WHC_INTSTS_POFF0IF_Pos              (1)
#define WHC_INTSTS_POFF0IF_Msk              (0x1ul << WHC_INTSTS_POFF0IF_Pos)

#define WHC_INTSTS_PD0IF_Pos                (2)
#define WHC_INTSTS_PD0IF_Msk                (0x1ul << WHC_INTSTS_PD0IF_Pos)

#define WHC_INTSTS_RST1IF_Pos               (3)
#define WHC_INTSTS_RST1IF_Msk               (0x1ul << WHC_INTSTS_RST1IF_Pos)

#define WHC_INTSTS_POFF1IF_Pos              (4)
#define WHC_INTSTS_POFF1IF_Msk              (0x1ul << WHC_INTSTS_POFF1IF_Pos)

#define WHC_INTSTS_PD1IF_Pos                (5)
#define WHC_INTSTS_PD1IF_Msk                (0x1ul << WHC_INTSTS_PD1IF_Pos)

#define WHC_INTSTS_GI0IF_Pos                (8)
#define WHC_INTSTS_GI0IF_Msk                (0x1ul << WHC_INTSTS_GI0IF_Pos)

#define WHC_INTSTS_GI1IF_Pos                (9)
#define WHC_INTSTS_GI1IF_Msk                (0x1ul << WHC_INTSTS_GI1IF_Pos)

#define WHC_INTSTS_GI2IF_Pos                (10)
#define WHC_INTSTS_GI2IF_Msk                (0x1ul << WHC_INTSTS_GI2IF_Pos)

#define WHC_INTSTS_GI3IF_Pos                (11)
#define WHC_INTSTS_GI3IF_Msk                (0x1ul << WHC_INTSTS_GI3IF_Pos)

#define WHC_INTSTS_TX0IF_Pos                (16)
#define WHC_INTSTS_TX0IF_Msk                (0x1ul << WHC_INTSTS_TX0IF_Pos)

#define WHC_INTSTS_TX1IF_Pos                (17)
#define WHC_INTSTS_TX1IF_Msk                (0x1ul << WHC_INTSTS_TX1IF_Pos)

#define WHC_INTSTS_TX2IF_Pos                (18)
#define WHC_INTSTS_TX2IF_Msk                (0x1ul << WHC_INTSTS_TX2IF_Pos)

#define WHC_INTSTS_TX3IF_Pos                (19)
#define WHC_INTSTS_TX3IF_Msk                (0x1ul << WHC_INTSTS_TX3IF_Pos)

#define WHC_INTSTS_RX0IF_Pos                (24)
#define WHC_INTSTS_RX0IF_Msk                (0x1ul << WHC_INTSTS_RX0IF_Pos)

#define WHC_INTSTS_RX1IF_Pos                (25)
#define WHC_INTSTS_RX1IF_Msk                (0x1ul << WHC_INTSTS_RX1IF_Pos)

#define WHC_INTSTS_RX2IF_Pos                (26)
#define WHC_INTSTS_RX2IF_Msk                (0x1ul << WHC_INTSTS_RX2IF_Pos)

#define WHC_INTSTS_RX3IF_Pos                (27)
#define WHC_INTSTS_RX3IF_Msk                (0x1ul << WHC_INTSTS_RX3IF_Pos)

#define WHC_CPSTS_WDTRF_Pos                 (2)
#define WHC_CPSTS_WDTRF_Msk                 (0x1ul << WHC_INTSTS_WDTRF_Pos)

#define WHC_CPSTS_SYSRF_Pos                 (5)
#define WHC_CPSTS_SYSRF_Msk                 (0x1ul << WHC_INTSTS_SYSRF_Pos)

#define WHC_CPSTS_CPURF_Pos                 (7)
#define WHC_CPSTS_CPURF_Msk                 (0x1ul << WHC_INTSTS_CPURF_Pos)

#define WHC_CPSTS_CPULKRF_Pos               (8)
#define WHC_CPSTS_CPULKRF_Msk               (0x1ul << WHC_INTSTS_CPULKRF_Pos)

#define WHC_CPSTS_OPMODE_Pos                (24)
#define WHC_CPSTS_OPMODE_Msk                (0xful << WHC_INTSTS_OPMODE_Pos)

#define WHC_GINTTRG_TRGG0_Pos               (0)
#define WHC_GINTTRG_TRGG0_Msk               (0x1ul << WHC_GINTTRG_TRGG0_Pos)

#define WHC_GINTTRG_TRGG1_Pos               (1)
#define WHC_GINTTRG_TRGG1_Msk               (0x1ul << WHC_GINTTRG_TRGG1_Pos)

#define WHC_GINTTRG_TRGG2_Pos               (2)
#define WHC_GINTTRG_TRGG2_Msk               (0x1ul << WHC_GINTTRG_TRGG2_Pos)

#define WHC_GINTTRG_TRGG3_Pos               (3)
#define WHC_GINTTRG_TRGG3_Msk               (0x1ul << WHC_GINTTRG_TRGG3_Pos)

#define WHC_TXCTL_CH0SND_Pos                (0)
#define WHC_TXCTL_CH0SND_Msk                (0x1ul << WHC_TXCTL_CH0SND_Pos)

#define WHC_TXCTL_CH1SND_Pos                (1)
#define WHC_TXCTL_CH1SND_Msk                (0x1ul << WHC_TXCTL_CH1SND_Pos)

#define WHC_TXCTL_CH2SND_Pos                (2)
#define WHC_TXCTL_CH2SND_Msk                (0x1ul << WHC_TXCTL_CH2SND_Pos)

#define WHC_TXCTL_CH3SND_Pos                (3)
#define WHC_TXCTL_CH3SND_Msk                (0x1ul << WHC_TXCTL_CH3SND_Pos)

#define WHC_TXCTL_CH0RC_Pos                 (16)
#define WHC_TXCTL_CH0RC_Msk                 (0x1ul << WHC_TXCTL_CH0RC_Pos)

#define WHC_TXCTL_CH1RC_Pos                 (17)
#define WHC_TXCTL_CH1RC_Msk                 (0x1ul << WHC_TXCTL_CH1RC_Pos)

#define WHC_TXCTL_CH2RC_Pos                 (18)
#define WHC_TXCTL_CH2RC_Msk                 (0x1ul << WHC_TXCTL_CH2RC_Pos)

#define WHC_TXCTL_CH3RC_Pos                 (19)
#define WHC_TXCTL_CH3RC_Msk                 (0x1ul << WHC_TXCTL_CH3RC_Pos)

#define WHC_TXSTS_CH0RDY_Pos                (0)
#define WHC_TXSTS_CH0RDY_Msk                (0x1ul << WHC_TXSTS_CH0RDY_Pos)

#define WHC_TXSTS_CH1RDY_Pos                (1)
#define WHC_TXSTS_CH1RDY_Msk                (0x1ul << WHC_TXSTS_CH1RDY_Pos)

#define WHC_TXSTS_CH2RDY_Pos                (2)
#define WHC_TXSTS_CH2RDY_Msk                (0x1ul << WHC_TXSTS_CH2RDY_Pos)

#define WHC_TXSTS_CH3RDY_Pos                (3)
#define WHC_TXSTS_CH3RDY_Msk                (0x1ul << WHC_TXSTS_CH3RDY_Pos)

#define WHC_RXCTL_CH0ACK_Pos                (0)
#define WHC_RXCTL_CH0ACK_Msk                (0x1ul << WHC_RXCTL_CH0ACK_Pos)

#define WHC_RXCTL_CH1ACK_Pos                (1)
#define WHC_RXCTL_CH1ACK_Msk                (0x1ul << WHC_RXCTL_CH1ACK_Pos)

#define WHC_RXCTL_CH2ACK_Pos                (2)
#define WHC_RXCTL_CH2ACK_Msk                (0x1ul << WHC_RXCTL_CH2ACK_Pos)

#define WHC_RXCTL_CH3ACK_Pos                (3)
#define WHC_RXCTL_CH3ACK_Msk                (0x1ul << WHC_RXCTL_CH3ACK_Pos)

#define WHC_RXSTS_CH0RDY_Pos                (0)
#define WHC_RXSTS_CH0RDY_Msk                (0x1ul << WHC_RXSTS_CH0RDY_Pos)

#define WHC_RXSTS_CH1RDY_Pos                (1)
#define WHC_RXSTS_CH1RDY_Msk                (0x1ul << WHC_RXSTS_CH1RDY_Pos)

#define WHC_RXSTS_CH2RDY_Pos                (2)
#define WHC_RXSTS_CH2RDY_Msk                (0x1ul << WHC_RXSTS_CH2RDY_Pos)

#define WHC_RXSTS_CH3RDY_Pos                (3)
#define WHC_RXSTS_CH3RDY_Msk                (0x1ul << WHC_RXSTS_CH3RDY_Pos)

#define WHC_TMDAT_DAT_Pos                   (0)
#define WHC_TMDAT_DAT_Msk                   (0xfffffffful << WHC_TMDAT_DAT_Pos)

#define WHC_RMDAT_DAT_Pos                   (0)
#define WHC_RMDAT_DAT_Msk                   (0xfffffffful << WHC_RMDAT_DAT_Pos)

#endif

