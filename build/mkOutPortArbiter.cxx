/*
 * Generated by Bluespec Compiler, version 2023.07-27-gf00d2058 (build f00d2058)
 * 
 * On Tue Mar 26 17:40:43 EDT 2024
 * 
 */
#include "bluesim_primitives.h"
#include "mkOutPortArbiter.h"


/* Constructor */
MOD_mkOutPortArbiter::MOD_mkOutPortArbiter(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_matrixArbiter_inited(simHdl, "matrixArbiter_inited", this, 1u, (tUInt8)0u, (tUInt8)0u),
    INST_matrixArbiter_priorityBits_0_0(simHdl,
					"matrixArbiter_priorityBits_0_0",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_0_1(simHdl,
					"matrixArbiter_priorityBits_0_1",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_0_2(simHdl,
					"matrixArbiter_priorityBits_0_2",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_0_3(simHdl,
					"matrixArbiter_priorityBits_0_3",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_0_4(simHdl,
					"matrixArbiter_priorityBits_0_4",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_1_0(simHdl,
					"matrixArbiter_priorityBits_1_0",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_1_1(simHdl,
					"matrixArbiter_priorityBits_1_1",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_1_2(simHdl,
					"matrixArbiter_priorityBits_1_2",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_1_3(simHdl,
					"matrixArbiter_priorityBits_1_3",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_1_4(simHdl,
					"matrixArbiter_priorityBits_1_4",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_2_0(simHdl,
					"matrixArbiter_priorityBits_2_0",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_2_1(simHdl,
					"matrixArbiter_priorityBits_2_1",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_2_2(simHdl,
					"matrixArbiter_priorityBits_2_2",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_2_3(simHdl,
					"matrixArbiter_priorityBits_2_3",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_2_4(simHdl,
					"matrixArbiter_priorityBits_2_4",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_3_0(simHdl,
					"matrixArbiter_priorityBits_3_0",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_3_1(simHdl,
					"matrixArbiter_priorityBits_3_1",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_3_2(simHdl,
					"matrixArbiter_priorityBits_3_2",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_3_3(simHdl,
					"matrixArbiter_priorityBits_3_3",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_3_4(simHdl,
					"matrixArbiter_priorityBits_3_4",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_4_0(simHdl,
					"matrixArbiter_priorityBits_4_0",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_4_1(simHdl,
					"matrixArbiter_priorityBits_4_1",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_4_2(simHdl,
					"matrixArbiter_priorityBits_4_2",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_4_3(simHdl,
					"matrixArbiter_priorityBits_4_3",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    INST_matrixArbiter_priorityBits_4_4(simHdl,
					"matrixArbiter_priorityBits_4_4",
					this,
					1u,
					(tUInt8)1u,
					(tUInt8)0u),
    PORT_RST_N((tUInt8)1u)
{
  symbol_count = 26u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mkOutPortArbiter::init_symbols_0()
{
  init_symbol(&symbols[0u], "matrixArbiter_inited", SYM_MODULE, &INST_matrixArbiter_inited);
  init_symbol(&symbols[1u],
	      "matrixArbiter_priorityBits_0_0",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_0_0);
  init_symbol(&symbols[2u],
	      "matrixArbiter_priorityBits_0_1",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_0_1);
  init_symbol(&symbols[3u],
	      "matrixArbiter_priorityBits_0_2",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_0_2);
  init_symbol(&symbols[4u],
	      "matrixArbiter_priorityBits_0_3",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_0_3);
  init_symbol(&symbols[5u],
	      "matrixArbiter_priorityBits_0_4",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_0_4);
  init_symbol(&symbols[6u],
	      "matrixArbiter_priorityBits_1_0",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_1_0);
  init_symbol(&symbols[7u],
	      "matrixArbiter_priorityBits_1_1",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_1_1);
  init_symbol(&symbols[8u],
	      "matrixArbiter_priorityBits_1_2",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_1_2);
  init_symbol(&symbols[9u],
	      "matrixArbiter_priorityBits_1_3",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_1_3);
  init_symbol(&symbols[10u],
	      "matrixArbiter_priorityBits_1_4",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_1_4);
  init_symbol(&symbols[11u],
	      "matrixArbiter_priorityBits_2_0",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_2_0);
  init_symbol(&symbols[12u],
	      "matrixArbiter_priorityBits_2_1",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_2_1);
  init_symbol(&symbols[13u],
	      "matrixArbiter_priorityBits_2_2",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_2_2);
  init_symbol(&symbols[14u],
	      "matrixArbiter_priorityBits_2_3",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_2_3);
  init_symbol(&symbols[15u],
	      "matrixArbiter_priorityBits_2_4",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_2_4);
  init_symbol(&symbols[16u],
	      "matrixArbiter_priorityBits_3_0",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_3_0);
  init_symbol(&symbols[17u],
	      "matrixArbiter_priorityBits_3_1",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_3_1);
  init_symbol(&symbols[18u],
	      "matrixArbiter_priorityBits_3_2",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_3_2);
  init_symbol(&symbols[19u],
	      "matrixArbiter_priorityBits_3_3",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_3_3);
  init_symbol(&symbols[20u],
	      "matrixArbiter_priorityBits_3_4",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_3_4);
  init_symbol(&symbols[21u],
	      "matrixArbiter_priorityBits_4_0",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_4_0);
  init_symbol(&symbols[22u],
	      "matrixArbiter_priorityBits_4_1",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_4_1);
  init_symbol(&symbols[23u],
	      "matrixArbiter_priorityBits_4_2",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_4_2);
  init_symbol(&symbols[24u],
	      "matrixArbiter_priorityBits_4_3",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_4_3);
  init_symbol(&symbols[25u],
	      "matrixArbiter_priorityBits_4_4",
	      SYM_MODULE,
	      &INST_matrixArbiter_priorityBits_4_4);
}


/* Rule actions */


/* Methods */

void MOD_mkOutPortArbiter::METH_initialize()
{
  INST_matrixArbiter_priorityBits_0_0.METH_write((tUInt8)0u);
  INST_matrixArbiter_priorityBits_1_1.METH_write((tUInt8)0u);
  INST_matrixArbiter_priorityBits_2_2.METH_write((tUInt8)0u);
  INST_matrixArbiter_priorityBits_3_3.METH_write((tUInt8)0u);
  INST_matrixArbiter_inited.METH_write((tUInt8)1u);
  INST_matrixArbiter_priorityBits_4_4.METH_write((tUInt8)0u);
}

tUInt8 MOD_mkOutPortArbiter::METH_RDY_initialize()
{
  tUInt8 DEF_matrixArbiter_inited__h1297;
  tUInt8 DEF_CAN_FIRE_initialize;
  tUInt8 PORT_RDY_initialize;
  DEF_matrixArbiter_inited__h1297 = INST_matrixArbiter_inited.METH_read();
  DEF_CAN_FIRE_initialize = !DEF_matrixArbiter_inited__h1297;
  PORT_RDY_initialize = DEF_CAN_FIRE_initialize;
  return PORT_RDY_initialize;
}

tUInt8 MOD_mkOutPortArbiter::METH_getArbit(tUInt8 ARG_getArbit_reqBit)
{
  tUInt8 DEF_y_avValue__h6528;
  tUInt8 DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d65;
  tUInt8 DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d77;
  tUInt8 DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d88;
  tUInt8 DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d98;
  tUInt8 DEF_NOT_getArbit_reqBit_EQ_0_1___d52;
  tUInt8 DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_NOT_getArbit__ETC___d107;
  tUInt8 DEF_getArbit_reqBit_EQ_0___d51;
  tUInt8 DEF_priTest__h3943;
  tUInt8 DEF_INV_matrixArbiter_priorityBits_3_4_4_CONCAT_ma_ETC___d22;
  tUInt8 DEF_priTest__h4364;
  tUInt8 DEF_matrixArbiter_priorityBits_4_4_CONCAT_matrixAr_ETC___d11;
  tUInt8 DEF_priTest__h3519;
  tUInt8 DEF_INV_matrixArbiter_priorityBits_2_4_5_CONCAT_IN_ETC___d33;
  tUInt8 DEF_priTest__h3092;
  tUInt8 DEF_INV_matrixArbiter_priorityBits_1_4_6_CONCAT_IN_ETC___d44;
  tUInt8 DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d50;
  tUInt8 DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d54;
  tUInt8 DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d56;
  tUInt8 DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d58;
  tUInt8 DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d60;
  tUInt8 DEF_getArbit_reqBit_BIT_1_5_AND_INV_matrixArbiter__ETC___d45;
  tUInt32 DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d49;
  tUInt8 DEF_matrixArbiter_priorityBits_0_1__h3221;
  tUInt8 DEF_matrixArbiter_priorityBits_0_2__h3648;
  tUInt8 DEF_matrixArbiter_priorityBits_0_3__h4072;
  tUInt8 DEF_matrixArbiter_priorityBits_0_4__h4493;
  tUInt8 DEF_matrixArbiter_priorityBits_1_1__h3273;
  tUInt8 DEF_matrixArbiter_priorityBits_1_2__h3699;
  tUInt8 DEF_matrixArbiter_priorityBits_1_3__h4123;
  tUInt8 DEF_matrixArbiter_priorityBits_1_4__h4544;
  tUInt8 DEF_matrixArbiter_priorityBits_2_2__h3751;
  tUInt8 DEF_matrixArbiter_priorityBits_2_3__h4174;
  tUInt8 DEF_matrixArbiter_priorityBits_2_4__h4595;
  tUInt8 DEF_matrixArbiter_priorityBits_3_3__h4227;
  tUInt8 DEF_matrixArbiter_priorityBits_3_4__h4647;
  tUInt8 DEF_matrixArbiter_priorityBits_4_4__h4700;
  tUInt8 DEF__dfoo1;
  tUInt8 DEF__dfoo2;
  tUInt8 DEF__dfoo3;
  tUInt8 DEF__dfoo4;
  tUInt8 DEF__dfoo5;
  tUInt8 DEF__dfoo6;
  tUInt8 DEF__dfoo7;
  tUInt8 DEF__dfoo8;
  tUInt8 DEF__dfoo9;
  tUInt8 DEF__dfoo10;
  tUInt8 DEF__dfoo11;
  tUInt8 DEF__dfoo12;
  tUInt8 DEF__dfoo13;
  tUInt8 DEF__dfoo14;
  tUInt8 DEF__dfoo15;
  tUInt8 DEF__dfoo16;
  tUInt8 DEF__dfoo17;
  tUInt8 DEF__dfoo18;
  tUInt8 DEF__dfoo19;
  tUInt8 DEF__dfoo20;
  tUInt8 DEF__dfoo21;
  tUInt8 DEF__dfoo22;
  tUInt8 DEF__dfoo23;
  tUInt8 DEF__dfoo24;
  tUInt8 DEF__dfoo25;
  tUInt8 DEF__dfoo26;
  tUInt8 DEF__dfoo27;
  tUInt8 DEF__dfoo28;
  tUInt8 DEF__dfoo29;
  tUInt8 DEF__dfoo30;
  tUInt8 DEF__dfoo31;
  tUInt8 DEF__dfoo32;
  tUInt8 DEF__dfoo33;
  tUInt8 DEF__dfoo34;
  tUInt8 DEF__dfoo35;
  tUInt8 DEF__dfoo36;
  tUInt8 DEF__dfoo37;
  tUInt8 DEF__dfoo38;
  tUInt8 DEF__dfoo39;
  tUInt8 DEF__dfoo40;
  tUInt8 DEF__dfoo41;
  tUInt8 DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61;
  tUInt8 DEF__dfoo42;
  tUInt8 DEF__dfoo43;
  tUInt8 DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59;
  tUInt8 DEF__dfoo44;
  tUInt8 DEF__dfoo45;
  tUInt8 DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57;
  tUInt8 DEF__dfoo46;
  tUInt8 DEF__dfoo47;
  tUInt8 DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55;
  tUInt8 DEF__dfoo48;
  tUInt8 DEF__dfoo49;
  tUInt8 DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53;
  tUInt8 DEF__dfoo50;
  tUInt8 DEF_getArbit_reqBit_BIT_2_4_AND_INV_matrixArbiter__ETC___d34;
  tUInt8 DEF_getArbit_reqBit_BIT_3_3_AND_INV_matrixArbiter__ETC___d23;
  tUInt8 DEF_getArbit_reqBit_BIT_4_AND_matrixArbiter_priori_ETC___d12;
  tUInt8 DEF_getArbit_reqBit_BIT_1___d35;
  tUInt8 DEF_getArbit_reqBit_BIT_2___d24;
  tUInt8 DEF_getArbit_reqBit_BIT_3___d13;
  tUInt8 DEF_getArbit_reqBit_BIT_4___d2;
  tUInt8 PORT_getArbit;
  DEF_getArbit_reqBit_BIT_4___d2 = (tUInt8)(ARG_getArbit_reqBit >> 4u);
  DEF_getArbit_reqBit_BIT_3___d13 = (tUInt8)((tUInt8)1u & (ARG_getArbit_reqBit >> 3u));
  DEF_getArbit_reqBit_BIT_2___d24 = (tUInt8)((tUInt8)1u & (ARG_getArbit_reqBit >> 2u));
  DEF_getArbit_reqBit_BIT_1___d35 = (tUInt8)((tUInt8)1u & (ARG_getArbit_reqBit >> 1u));
  DEF_matrixArbiter_priorityBits_4_4__h4700 = INST_matrixArbiter_priorityBits_4_4.METH_read();
  DEF_matrixArbiter_priorityBits_3_4__h4647 = INST_matrixArbiter_priorityBits_3_4.METH_read();
  DEF_matrixArbiter_priorityBits_3_3__h4227 = INST_matrixArbiter_priorityBits_3_3.METH_read();
  DEF_matrixArbiter_priorityBits_2_4__h4595 = INST_matrixArbiter_priorityBits_2_4.METH_read();
  DEF_matrixArbiter_priorityBits_2_3__h4174 = INST_matrixArbiter_priorityBits_2_3.METH_read();
  DEF_matrixArbiter_priorityBits_2_2__h3751 = INST_matrixArbiter_priorityBits_2_2.METH_read();
  DEF_matrixArbiter_priorityBits_1_4__h4544 = INST_matrixArbiter_priorityBits_1_4.METH_read();
  DEF_matrixArbiter_priorityBits_1_3__h4123 = INST_matrixArbiter_priorityBits_1_3.METH_read();
  DEF_matrixArbiter_priorityBits_1_2__h3699 = INST_matrixArbiter_priorityBits_1_2.METH_read();
  DEF_matrixArbiter_priorityBits_1_1__h3273 = INST_matrixArbiter_priorityBits_1_1.METH_read();
  DEF_matrixArbiter_priorityBits_0_4__h4493 = INST_matrixArbiter_priorityBits_0_4.METH_read();
  DEF_matrixArbiter_priorityBits_0_3__h4072 = INST_matrixArbiter_priorityBits_0_3.METH_read();
  DEF_matrixArbiter_priorityBits_0_2__h3648 = INST_matrixArbiter_priorityBits_0_2.METH_read();
  DEF_matrixArbiter_priorityBits_0_1__h3221 = INST_matrixArbiter_priorityBits_0_1.METH_read();
  DEF_priTest__h3092 = ((tUInt8)31u & (((((((tUInt8)1u & ~DEF_matrixArbiter_priorityBits_1_4__h4544) << 4u) | (((tUInt8)1u & ~DEF_matrixArbiter_priorityBits_1_3__h4123) << 3u)) | (((tUInt8)1u & ~DEF_matrixArbiter_priorityBits_1_2__h3699) << 2u)) | (DEF_matrixArbiter_priorityBits_1_1__h3273 << 1u)) | DEF_matrixArbiter_priorityBits_0_1__h3221)) & ARG_getArbit_reqBit;
  DEF_INV_matrixArbiter_priorityBits_1_4_6_CONCAT_IN_ETC___d44 = DEF_priTest__h3092 == (tUInt8)0u;
  DEF_getArbit_reqBit_BIT_1_5_AND_INV_matrixArbiter__ETC___d45 = DEF_getArbit_reqBit_BIT_1___d35 && DEF_INV_matrixArbiter_priorityBits_1_4_6_CONCAT_IN_ETC___d44;
  DEF_priTest__h3519 = ((tUInt8)31u & (((((((tUInt8)1u & ~DEF_matrixArbiter_priorityBits_2_4__h4595) << 4u) | (((tUInt8)1u & ~DEF_matrixArbiter_priorityBits_2_3__h4174) << 3u)) | (DEF_matrixArbiter_priorityBits_2_2__h3751 << 2u)) | (DEF_matrixArbiter_priorityBits_1_2__h3699 << 1u)) | DEF_matrixArbiter_priorityBits_0_2__h3648)) & ARG_getArbit_reqBit;
  DEF_INV_matrixArbiter_priorityBits_2_4_5_CONCAT_IN_ETC___d33 = DEF_priTest__h3519 == (tUInt8)0u;
  DEF_getArbit_reqBit_BIT_2_4_AND_INV_matrixArbiter__ETC___d34 = DEF_getArbit_reqBit_BIT_2___d24 && DEF_INV_matrixArbiter_priorityBits_2_4_5_CONCAT_IN_ETC___d33;
  DEF_priTest__h3943 = ((tUInt8)31u & (((((((tUInt8)1u & ~DEF_matrixArbiter_priorityBits_3_4__h4647) << 4u) | (DEF_matrixArbiter_priorityBits_3_3__h4227 << 3u)) | (DEF_matrixArbiter_priorityBits_2_3__h4174 << 2u)) | (DEF_matrixArbiter_priorityBits_1_3__h4123 << 1u)) | DEF_matrixArbiter_priorityBits_0_3__h4072)) & ARG_getArbit_reqBit;
  DEF_priTest__h4364 = ((tUInt8)31u & (((((DEF_matrixArbiter_priorityBits_4_4__h4700 << 4u) | (DEF_matrixArbiter_priorityBits_3_4__h4647 << 3u)) | (DEF_matrixArbiter_priorityBits_2_4__h4595 << 2u)) | (DEF_matrixArbiter_priorityBits_1_4__h4544 << 1u)) | DEF_matrixArbiter_priorityBits_0_4__h4493)) & ARG_getArbit_reqBit;
  DEF_matrixArbiter_priorityBits_4_4_CONCAT_matrixAr_ETC___d11 = DEF_priTest__h4364 == (tUInt8)0u;
  DEF_getArbit_reqBit_BIT_4_AND_matrixArbiter_priori_ETC___d12 = DEF_getArbit_reqBit_BIT_4___d2 && DEF_matrixArbiter_priorityBits_4_4_CONCAT_matrixAr_ETC___d11;
  DEF_INV_matrixArbiter_priorityBits_3_4_4_CONCAT_ma_ETC___d22 = DEF_priTest__h3943 == (tUInt8)0u;
  DEF_getArbit_reqBit_BIT_3_3_AND_INV_matrixArbiter__ETC___d23 = DEF_getArbit_reqBit_BIT_3___d13 && DEF_INV_matrixArbiter_priorityBits_3_4_4_CONCAT_ma_ETC___d22;
  DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d49 = DEF_getArbit_reqBit_BIT_4_AND_matrixArbiter_priori_ETC___d12 ? 4u : (DEF_getArbit_reqBit_BIT_3_3_AND_INV_matrixArbiter__ETC___d23 ? 3u : (DEF_getArbit_reqBit_BIT_2_4_AND_INV_matrixArbiter__ETC___d34 ? 2u : (DEF_getArbit_reqBit_BIT_1_5_AND_INV_matrixArbiter__ETC___d45 ? 1u : 0u)));
  DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d60 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d49 == 4u;
  DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d58 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d49 == 3u;
  DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d56 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d49 == 2u;
  DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d54 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d49 == 1u;
  DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d50 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d49 == 0u;
  DEF_getArbit_reqBit_EQ_0___d51 = ARG_getArbit_reqBit == (tUInt8)0u;
  DEF_NOT_getArbit_reqBit_EQ_0_1___d52 = !DEF_getArbit_reqBit_EQ_0___d51;
  DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d50 && DEF_NOT_getArbit_reqBit_EQ_0_1___d52;
  DEF__dfoo50 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53 ? (tUInt8)0u : (tUInt8)1u;
  DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d54 && DEF_NOT_getArbit_reqBit_EQ_0_1___d52;
  DEF__dfoo48 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55 ? (tUInt8)0u : (tUInt8)1u;
  DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d58 && DEF_NOT_getArbit_reqBit_EQ_0_1___d52;
  DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d56 && DEF_NOT_getArbit_reqBit_EQ_0_1___d52;
  DEF__dfoo46 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo44 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59 ? (tUInt8)0u : (tUInt8)1u;
  DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d60 && DEF_NOT_getArbit_reqBit_EQ_0_1___d52;
  DEF__dfoo42 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo40 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo38 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo36 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo34 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo32 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo30 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo28 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo26 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo24 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo14 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo22 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo20 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo18 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo12 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo16 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo6 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo10 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo8 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo4 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59 ? (tUInt8)0u : (tUInt8)1u;
  DEF__dfoo2 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61 ? (tUInt8)0u : (tUInt8)1u;
  DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_NOT_getArbit__ETC___d107 = DEF_NOT_getArbit_reqBit_EQ_0_1___d52 && (!DEF_getArbit_reqBit_BIT_4___d2 || !DEF_matrixArbiter_priorityBits_4_4_CONCAT_matrixAr_ETC___d11);
  DEF__dfoo41 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d50 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_NOT_getArbit__ETC___d107);
  DEF__dfoo31 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d54 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_NOT_getArbit__ETC___d107);
  DEF__dfoo21 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d56 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_NOT_getArbit__ETC___d107);
  DEF__dfoo11 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d58 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_NOT_getArbit__ETC___d107);
  DEF__dfoo1 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d61 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d60 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_NOT_getArbit__ETC___d107);
  DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d98 = DEF_NOT_getArbit_reqBit_EQ_0_1___d52 && (DEF_getArbit_reqBit_BIT_4_AND_matrixArbiter_priori_ETC___d12 || (!DEF_getArbit_reqBit_BIT_3___d13 || !DEF_INV_matrixArbiter_priorityBits_3_4_4_CONCAT_ma_ETC___d22));
  DEF__dfoo43 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d50 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d98);
  DEF__dfoo33 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d54 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d98);
  DEF__dfoo23 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d56 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d98);
  DEF__dfoo13 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d58 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d98);
  DEF__dfoo3 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d59 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d60 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d98);
  DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d88 = DEF_NOT_getArbit_reqBit_EQ_0_1___d52 && (DEF_getArbit_reqBit_BIT_4_AND_matrixArbiter_priori_ETC___d12 || (DEF_getArbit_reqBit_BIT_3_3_AND_INV_matrixArbiter__ETC___d23 || (!DEF_getArbit_reqBit_BIT_2___d24 || !DEF_INV_matrixArbiter_priorityBits_2_4_5_CONCAT_IN_ETC___d33)));
  DEF__dfoo45 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d50 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d88);
  DEF__dfoo35 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d54 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d88);
  DEF__dfoo25 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d56 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d88);
  DEF__dfoo15 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d58 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d88);
  DEF__dfoo5 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d57 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d60 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d88);
  DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d77 = DEF_NOT_getArbit_reqBit_EQ_0_1___d52 && (DEF_getArbit_reqBit_BIT_4_AND_matrixArbiter_priori_ETC___d12 || (DEF_getArbit_reqBit_BIT_3_3_AND_INV_matrixArbiter__ETC___d23 || (DEF_getArbit_reqBit_BIT_2_4_AND_INV_matrixArbiter__ETC___d34 || (!DEF_getArbit_reqBit_BIT_1___d35 || !DEF_INV_matrixArbiter_priorityBits_1_4_6_CONCAT_IN_ETC___d44))));
  DEF__dfoo47 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d50 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d77);
  DEF__dfoo37 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d54 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d77);
  DEF__dfoo27 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d56 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d77);
  DEF__dfoo17 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d58 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d77);
  DEF__dfoo7 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d55 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d60 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d77);
  DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d65 = DEF_NOT_getArbit_reqBit_EQ_0_1___d52 && (DEF_getArbit_reqBit_BIT_4_AND_matrixArbiter_priori_ETC___d12 || (DEF_getArbit_reqBit_BIT_3_3_AND_INV_matrixArbiter__ETC___d23 || (DEF_getArbit_reqBit_BIT_2_4_AND_INV_matrixArbiter__ETC___d34 || DEF_getArbit_reqBit_BIT_1_5_AND_INV_matrixArbiter__ETC___d45)));
  DEF__dfoo49 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d50 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d65);
  DEF__dfoo39 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d54 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d65);
  DEF__dfoo29 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d56 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d65);
  DEF__dfoo19 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d58 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d65);
  DEF_y_avValue__h6528 = primShiftL8(5u,
				     5u,
				     (tUInt8)1u,
				     32u,
				     (tUInt32)(DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d49));
  PORT_getArbit = DEF_getArbit_reqBit_EQ_0___d51 ? ARG_getArbit_reqBit : DEF_y_avValue__h6528;
  DEF__dfoo9 = DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d53 || (DEF_IF_getArbit_reqBit_BIT_4_AND_matrixArbiter_pri_ETC___d60 && DEF_NOT_getArbit_reqBit_EQ_0_1_2_AND_getArbit_reqB_ETC___d65);
  if (DEF__dfoo49)
    INST_matrixArbiter_priorityBits_0_0.METH_write(DEF__dfoo50);
  if (DEF__dfoo47)
    INST_matrixArbiter_priorityBits_1_0.METH_write(DEF__dfoo48);
  if (DEF__dfoo45)
    INST_matrixArbiter_priorityBits_2_0.METH_write(DEF__dfoo46);
  if (DEF__dfoo43)
    INST_matrixArbiter_priorityBits_3_0.METH_write(DEF__dfoo44);
  if (DEF__dfoo41)
    INST_matrixArbiter_priorityBits_4_0.METH_write(DEF__dfoo42);
  if (DEF__dfoo39)
    INST_matrixArbiter_priorityBits_0_1.METH_write(DEF__dfoo40);
  if (DEF__dfoo37)
    INST_matrixArbiter_priorityBits_1_1.METH_write(DEF__dfoo38);
  if (DEF__dfoo35)
    INST_matrixArbiter_priorityBits_2_1.METH_write(DEF__dfoo36);
  if (DEF__dfoo33)
    INST_matrixArbiter_priorityBits_3_1.METH_write(DEF__dfoo34);
  if (DEF__dfoo31)
    INST_matrixArbiter_priorityBits_4_1.METH_write(DEF__dfoo32);
  if (DEF__dfoo29)
    INST_matrixArbiter_priorityBits_0_2.METH_write(DEF__dfoo30);
  if (DEF__dfoo27)
    INST_matrixArbiter_priorityBits_1_2.METH_write(DEF__dfoo28);
  if (DEF__dfoo25)
    INST_matrixArbiter_priorityBits_2_2.METH_write(DEF__dfoo26);
  if (DEF__dfoo23)
    INST_matrixArbiter_priorityBits_3_2.METH_write(DEF__dfoo24);
  if (DEF__dfoo21)
    INST_matrixArbiter_priorityBits_4_2.METH_write(DEF__dfoo22);
  if (DEF__dfoo19)
    INST_matrixArbiter_priorityBits_0_3.METH_write(DEF__dfoo20);
  if (DEF__dfoo17)
    INST_matrixArbiter_priorityBits_1_3.METH_write(DEF__dfoo18);
  if (DEF__dfoo15)
    INST_matrixArbiter_priorityBits_2_3.METH_write(DEF__dfoo16);
  if (DEF__dfoo13)
    INST_matrixArbiter_priorityBits_3_3.METH_write(DEF__dfoo14);
  if (DEF__dfoo11)
    INST_matrixArbiter_priorityBits_4_3.METH_write(DEF__dfoo12);
  if (DEF__dfoo9)
    INST_matrixArbiter_priorityBits_0_4.METH_write(DEF__dfoo10);
  if (DEF__dfoo7)
    INST_matrixArbiter_priorityBits_1_4.METH_write(DEF__dfoo8);
  if (DEF__dfoo5)
    INST_matrixArbiter_priorityBits_2_4.METH_write(DEF__dfoo6);
  if (DEF__dfoo1)
    INST_matrixArbiter_priorityBits_4_4.METH_write(DEF__dfoo2);
  if (DEF__dfoo3)
    INST_matrixArbiter_priorityBits_3_4.METH_write(DEF__dfoo4);
  return PORT_getArbit;
}

tUInt8 MOD_mkOutPortArbiter::METH_RDY_getArbit()
{
  tUInt8 DEF_CAN_FIRE_getArbit;
  tUInt8 PORT_RDY_getArbit;
  DEF_CAN_FIRE_getArbit = (tUInt8)1u;
  PORT_RDY_getArbit = DEF_CAN_FIRE_getArbit;
  return PORT_RDY_getArbit;
}


/* Reset routines */

void MOD_mkOutPortArbiter::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_matrixArbiter_priorityBits_4_4.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_4_3.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_4_2.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_4_1.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_4_0.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_3_4.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_3_3.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_3_2.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_3_1.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_3_0.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_2_4.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_2_3.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_2_2.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_2_1.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_2_0.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_1_4.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_1_3.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_1_2.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_1_1.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_1_0.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_0_4.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_0_3.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_0_2.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_0_1.reset_RST(ARG_rst_in);
  INST_matrixArbiter_priorityBits_0_0.reset_RST(ARG_rst_in);
  INST_matrixArbiter_inited.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mkOutPortArbiter::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mkOutPortArbiter::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_matrixArbiter_inited.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_0_0.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_0_1.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_0_2.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_0_3.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_0_4.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_1_0.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_1_1.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_1_2.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_1_3.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_1_4.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_2_0.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_2_1.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_2_2.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_2_3.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_2_4.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_3_0.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_3_1.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_3_2.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_3_3.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_3_4.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_4_0.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_4_1.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_4_2.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_4_3.dump_state(indent + 2u);
  INST_matrixArbiter_priorityBits_4_4.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mkOutPortArbiter::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 27u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  num = INST_matrixArbiter_inited.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_0_0.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_0_1.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_0_2.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_0_3.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_0_4.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_1_0.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_1_1.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_1_2.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_1_3.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_1_4.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_2_0.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_2_1.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_2_2.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_2_3.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_2_4.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_3_0.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_3_1.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_3_2.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_3_3.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_3_4.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_4_0.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_4_1.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_4_2.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_4_3.dump_VCD_defs(num);
  num = INST_matrixArbiter_priorityBits_4_4.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mkOutPortArbiter::dump_VCD(tVCDDumpType dt,
				    unsigned int levels,
				    MOD_mkOutPortArbiter &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mkOutPortArbiter::vcd_defs(tVCDDumpType dt, MOD_mkOutPortArbiter &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
    }
}

void MOD_mkOutPortArbiter::vcd_prims(tVCDDumpType dt, MOD_mkOutPortArbiter &backing)
{
  INST_matrixArbiter_inited.dump_VCD(dt, backing.INST_matrixArbiter_inited);
  INST_matrixArbiter_priorityBits_0_0.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_0_0);
  INST_matrixArbiter_priorityBits_0_1.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_0_1);
  INST_matrixArbiter_priorityBits_0_2.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_0_2);
  INST_matrixArbiter_priorityBits_0_3.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_0_3);
  INST_matrixArbiter_priorityBits_0_4.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_0_4);
  INST_matrixArbiter_priorityBits_1_0.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_1_0);
  INST_matrixArbiter_priorityBits_1_1.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_1_1);
  INST_matrixArbiter_priorityBits_1_2.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_1_2);
  INST_matrixArbiter_priorityBits_1_3.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_1_3);
  INST_matrixArbiter_priorityBits_1_4.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_1_4);
  INST_matrixArbiter_priorityBits_2_0.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_2_0);
  INST_matrixArbiter_priorityBits_2_1.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_2_1);
  INST_matrixArbiter_priorityBits_2_2.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_2_2);
  INST_matrixArbiter_priorityBits_2_3.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_2_3);
  INST_matrixArbiter_priorityBits_2_4.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_2_4);
  INST_matrixArbiter_priorityBits_3_0.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_3_0);
  INST_matrixArbiter_priorityBits_3_1.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_3_1);
  INST_matrixArbiter_priorityBits_3_2.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_3_2);
  INST_matrixArbiter_priorityBits_3_3.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_3_3);
  INST_matrixArbiter_priorityBits_3_4.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_3_4);
  INST_matrixArbiter_priorityBits_4_0.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_4_0);
  INST_matrixArbiter_priorityBits_4_1.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_4_1);
  INST_matrixArbiter_priorityBits_4_2.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_4_2);
  INST_matrixArbiter_priorityBits_4_3.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_4_3);
  INST_matrixArbiter_priorityBits_4_4.dump_VCD(dt, backing.INST_matrixArbiter_priorityBits_4_4);
}