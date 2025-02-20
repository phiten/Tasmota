/* Solidification of Matter_Message.h */
/********************************************************************\
* Generated code, don't edit                                         *
\********************************************************************/
#include "be_constobj.h"

extern const bclass be_class_Matter_Frame;

/********************************************************************
** Solidified function: decrypt
********************************************************************/
be_local_closure(Matter_Frame_decrypt,   /* name */
  be_nested_proto(
    16,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[30]) {     /* constants */
    /* K0   */  be_nested_str_weak(crypto),
    /* K1   */  be_nested_str_weak(session),
    /* K2   */  be_nested_str_weak(raw),
    /* K3   */  be_nested_str_weak(get_i2r),
    /* K4   */  be_const_int(2147483647),
    /* K5   */  be_const_int(0),
    /* K6   */  be_nested_str_weak(payload_idx),
    /* K7   */  be_const_int(1),
    /* K8   */  be_nested_str_weak(add),
    /* K9   */  be_nested_str_weak(flags),
    /* K10  */  be_nested_str_weak(message_counter),
    /* K11  */  be_nested_str_weak(source_node_id),
    /* K12  */  be_nested_str_weak(peer_node_id),
    /* K13  */  be_nested_str_weak(resize),
    /* K14  */  be_nested_str_weak(tasmota),
    /* K15  */  be_nested_str_weak(log),
    /* K16  */  be_nested_str_weak(MTR_X3A_X20_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A),
    /* K17  */  be_const_int(3),
    /* K18  */  be_nested_str_weak(MTR_X3A_X20i2r_X20_X20_X20_X20_X20_X20_X20_X20_X20_X3D),
    /* K19  */  be_nested_str_weak(tohex),
    /* K20  */  be_nested_str_weak(MTR_X3A_X20p_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X3D),
    /* K21  */  be_nested_str_weak(MTR_X3A_X20a_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X3D),
    /* K22  */  be_nested_str_weak(MTR_X3A_X20n_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X3D),
    /* K23  */  be_nested_str_weak(MTR_X3A_X20mic_X20_X20_X20_X20_X20_X20_X20_X20_X20_X3D),
    /* K24  */  be_nested_str_weak(AES_CCM),
    /* K25  */  be_nested_str_weak(decrypt),
    /* K26  */  be_nested_str_weak(tag),
    /* K27  */  be_nested_str_weak(MTR_X3A_X20cleartext_X20_X20_X20_X3D),
    /* K28  */  be_nested_str_weak(MTR_X3A_X20tag_X20_X20_X20_X20_X20_X20_X20_X20_X20_X3D),
    /* K29  */  be_nested_str_weak(MTR_X3A_X20rejected_X20packet_X20due_X20to_X20invalid_X20MIC),
    }),
    be_str_weak(decrypt),
    &be_const_str_solidified,
    ( &(const binstruction[125]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x880C0102,  //  0002  GETMBR	R3	R0	K2
      0x8C100503,  //  0003  GETMET	R4	R2	K3
      0x7C100200,  //  0004  CALL	R4	1
      0x5415FFEF,  //  0005  LDINT	R5	-16
      0x40140B04,  //  0006  CONNECT	R5	R5	K4
      0x94140605,  //  0007  GETIDX	R5	R3	R5
      0x88180106,  //  0008  GETMBR	R6	R0	K6
      0x04180D07,  //  0009  SUB	R6	R6	K7
      0x401A0A06,  //  000A  CONNECT	R6	K5	R6
      0x94180606,  //  000B  GETIDX	R6	R3	R6
      0x881C0106,  //  000C  GETMBR	R7	R0	K6
      0x5421FFEE,  //  000D  LDINT	R8	-17
      0x401C0E08,  //  000E  CONNECT	R7	R7	R8
      0x941C0607,  //  000F  GETIDX	R7	R3	R7
      0x60200015,  //  0010  GETGBL	R8	G21
      0x7C200000,  //  0011  CALL	R8	0
      0x8C241108,  //  0012  GETMET	R9	R8	K8
      0x882C0109,  //  0013  GETMBR	R11	R0	K9
      0x58300007,  //  0014  LDCONST	R12	K7
      0x7C240600,  //  0015  CALL	R9	3
      0x8C241108,  //  0016  GETMET	R9	R8	K8
      0x882C010A,  //  0017  GETMBR	R11	R0	K10
      0x54320003,  //  0018  LDINT	R12	4
      0x7C240600,  //  0019  CALL	R9	3
      0x8824010B,  //  001A  GETMBR	R9	R0	K11
      0x78260001,  //  001B  JMPF	R9	#001E
      0x40241104,  //  001C  CONNECT	R9	R8	K4
      0x70020006,  //  001D  JMP		#0025
      0x8824050C,  //  001E  GETMBR	R9	R2	K12
      0x78260001,  //  001F  JMPF	R9	#0022
      0x8824050C,  //  0020  GETMBR	R9	R2	K12
      0x40241009,  //  0021  CONNECT	R9	R8	R9
      0x8C24110D,  //  0022  GETMET	R9	R8	K13
      0x542E000C,  //  0023  LDINT	R11	13
      0x7C240400,  //  0024  CALL	R9	2
      0xB8261C00,  //  0025  GETNGBL	R9	K14
      0x8C24130F,  //  0026  GETMET	R9	R9	K15
      0x582C0010,  //  0027  LDCONST	R11	K16
      0x58300011,  //  0028  LDCONST	R12	K17
      0x7C240600,  //  0029  CALL	R9	3
      0xB8261C00,  //  002A  GETNGBL	R9	K14
      0x8C24130F,  //  002B  GETMET	R9	R9	K15
      0x8C2C0913,  //  002C  GETMET	R11	R4	K19
      0x7C2C0200,  //  002D  CALL	R11	1
      0x002E240B,  //  002E  ADD	R11	K18	R11
      0x58300011,  //  002F  LDCONST	R12	K17
      0x7C240600,  //  0030  CALL	R9	3
      0xB8261C00,  //  0031  GETNGBL	R9	K14
      0x8C24130F,  //  0032  GETMET	R9	R9	K15
      0x8C2C0F13,  //  0033  GETMET	R11	R7	K19
      0x7C2C0200,  //  0034  CALL	R11	1
      0x002E280B,  //  0035  ADD	R11	K20	R11
      0x58300011,  //  0036  LDCONST	R12	K17
      0x7C240600,  //  0037  CALL	R9	3
      0xB8261C00,  //  0038  GETNGBL	R9	K14
      0x8C24130F,  //  0039  GETMET	R9	R9	K15
      0x8C2C0D13,  //  003A  GETMET	R11	R6	K19
      0x7C2C0200,  //  003B  CALL	R11	1
      0x002E2A0B,  //  003C  ADD	R11	K21	R11
      0x58300011,  //  003D  LDCONST	R12	K17
      0x7C240600,  //  003E  CALL	R9	3
      0xB8261C00,  //  003F  GETNGBL	R9	K14
      0x8C24130F,  //  0040  GETMET	R9	R9	K15
      0x8C2C1113,  //  0041  GETMET	R11	R8	K19
      0x7C2C0200,  //  0042  CALL	R11	1
      0x002E2C0B,  //  0043  ADD	R11	K22	R11
      0x58300011,  //  0044  LDCONST	R12	K17
      0x7C240600,  //  0045  CALL	R9	3
      0xB8261C00,  //  0046  GETNGBL	R9	K14
      0x8C24130F,  //  0047  GETMET	R9	R9	K15
      0x8C2C0B13,  //  0048  GETMET	R11	R5	K19
      0x7C2C0200,  //  0049  CALL	R11	1
      0x002E2E0B,  //  004A  ADD	R11	K23	R11
      0x58300011,  //  004B  LDCONST	R12	K17
      0x7C240600,  //  004C  CALL	R9	3
      0x8C240318,  //  004D  GETMET	R9	R1	K24
      0x5C2C0800,  //  004E  MOVE	R11	R4
      0x5C301000,  //  004F  MOVE	R12	R8
      0x5C340C00,  //  0050  MOVE	R13	R6
      0x6038000C,  //  0051  GETGBL	R14	G12
      0x5C3C0E00,  //  0052  MOVE	R15	R7
      0x7C380200,  //  0053  CALL	R14	1
      0x543E000F,  //  0054  LDINT	R15	16
      0x7C240C00,  //  0055  CALL	R9	6
      0x8C281319,  //  0056  GETMET	R10	R9	K25
      0x5C300E00,  //  0057  MOVE	R12	R7
      0x7C280400,  //  0058  CALL	R10	2
      0x8C2C131A,  //  0059  GETMET	R11	R9	K26
      0x7C2C0200,  //  005A  CALL	R11	1
      0xB8321C00,  //  005B  GETNGBL	R12	K14
      0x8C30190F,  //  005C  GETMET	R12	R12	K15
      0x58380010,  //  005D  LDCONST	R14	K16
      0x583C0011,  //  005E  LDCONST	R15	K17
      0x7C300600,  //  005F  CALL	R12	3
      0xB8321C00,  //  0060  GETNGBL	R12	K14
      0x8C30190F,  //  0061  GETMET	R12	R12	K15
      0x8C381513,  //  0062  GETMET	R14	R10	K19
      0x7C380200,  //  0063  CALL	R14	1
      0x003A360E,  //  0064  ADD	R14	K27	R14
      0x583C0011,  //  0065  LDCONST	R15	K17
      0x7C300600,  //  0066  CALL	R12	3
      0xB8321C00,  //  0067  GETNGBL	R12	K14
      0x8C30190F,  //  0068  GETMET	R12	R12	K15
      0x8C381713,  //  0069  GETMET	R14	R11	K19
      0x7C380200,  //  006A  CALL	R14	1
      0x003A380E,  //  006B  ADD	R14	K28	R14
      0x583C0011,  //  006C  LDCONST	R15	K17
      0x7C300600,  //  006D  CALL	R12	3
      0xB8321C00,  //  006E  GETNGBL	R12	K14
      0x8C30190F,  //  006F  GETMET	R12	R12	K15
      0x58380010,  //  0070  LDCONST	R14	K16
      0x583C0011,  //  0071  LDCONST	R15	K17
      0x7C300600,  //  0072  CALL	R12	3
      0x20301605,  //  0073  NE	R12	R11	R5
      0x78320006,  //  0074  JMPF	R12	#007C
      0xB8321C00,  //  0075  GETNGBL	R12	K14
      0x8C30190F,  //  0076  GETMET	R12	R12	K15
      0x5838001D,  //  0077  LDCONST	R14	K29
      0x583C0011,  //  0078  LDCONST	R15	K17
      0x7C300600,  //  0079  CALL	R12	3
      0x4C300000,  //  007A  LDNIL	R12
      0x80041800,  //  007B  RET	1	R12
      0x80041400,  //  007C  RET	1	R10
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: init
********************************************************************/
be_local_closure(Matter_Frame_init,   /* name */
  be_nested_proto(
    3,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[ 2]) {     /* constants */
    /* K0   */  be_nested_str_weak(message_handler),
    /* K1   */  be_nested_str_weak(raw),
    }),
    be_str_weak(init),
    &be_const_str_solidified,
    ( &(const binstruction[ 3]) {  /* code */
      0x90020001,  //  0000  SETMBR	R0	K0	R1
      0x90020202,  //  0001  SETMBR	R0	K1	R2
      0x80000000,  //  0002  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: decode_payload
********************************************************************/
be_local_closure(Matter_Frame_decode_payload,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[19]) {     /* constants */
    /* K0   */  be_nested_str_weak(payload_idx),
    /* K1   */  be_nested_str_weak(raw),
    /* K2   */  be_nested_str_weak(x_flags),
    /* K3   */  be_nested_str_weak(get),
    /* K4   */  be_const_int(1),
    /* K5   */  be_nested_str_weak(x_flag_v),
    /* K6   */  be_nested_str_weak(getbits),
    /* K7   */  be_nested_str_weak(x_flag_sx),
    /* K8   */  be_const_int(3),
    /* K9   */  be_nested_str_weak(x_flag_r),
    /* K10  */  be_const_int(2),
    /* K11  */  be_nested_str_weak(x_flag_a),
    /* K12  */  be_nested_str_weak(x_flag_i),
    /* K13  */  be_nested_str_weak(opcode),
    /* K14  */  be_nested_str_weak(exchange_id),
    /* K15  */  be_nested_str_weak(protocol_id),
    /* K16  */  be_nested_str_weak(vendor_id),
    /* K17  */  be_nested_str_weak(ack_message_counter),
    /* K18  */  be_nested_str_weak(app_payload_idx),
    }),
    be_str_weak(decode_payload),
    &be_const_str_solidified,
    ( &(const binstruction[87]) {  /* code */
      0x88040100,  //  0000  GETMBR	R1	R0	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x8C0C0503,  //  0002  GETMET	R3	R2	K3
      0x5C140200,  //  0003  MOVE	R5	R1
      0x58180004,  //  0004  LDCONST	R6	K4
      0x7C0C0600,  //  0005  CALL	R3	3
      0x90020403,  //  0006  SETMBR	R0	K2	R3
      0x8C0C0506,  //  0007  GETMET	R3	R2	K6
      0x54160007,  //  0008  LDINT	R5	8
      0x08140205,  //  0009  MUL	R5	R1	R5
      0x541A0003,  //  000A  LDINT	R6	4
      0x00140A06,  //  000B  ADD	R5	R5	R6
      0x58180004,  //  000C  LDCONST	R6	K4
      0x7C0C0600,  //  000D  CALL	R3	3
      0x90020A03,  //  000E  SETMBR	R0	K5	R3
      0x8C0C0506,  //  000F  GETMET	R3	R2	K6
      0x54160007,  //  0010  LDINT	R5	8
      0x08140205,  //  0011  MUL	R5	R1	R5
      0x00140B08,  //  0012  ADD	R5	R5	K8
      0x58180004,  //  0013  LDCONST	R6	K4
      0x7C0C0600,  //  0014  CALL	R3	3
      0x90020E03,  //  0015  SETMBR	R0	K7	R3
      0x8C0C0506,  //  0016  GETMET	R3	R2	K6
      0x54160007,  //  0017  LDINT	R5	8
      0x08140205,  //  0018  MUL	R5	R1	R5
      0x00140B0A,  //  0019  ADD	R5	R5	K10
      0x58180004,  //  001A  LDCONST	R6	K4
      0x7C0C0600,  //  001B  CALL	R3	3
      0x90021203,  //  001C  SETMBR	R0	K9	R3
      0x8C0C0506,  //  001D  GETMET	R3	R2	K6
      0x54160007,  //  001E  LDINT	R5	8
      0x08140205,  //  001F  MUL	R5	R1	R5
      0x00140B04,  //  0020  ADD	R5	R5	K4
      0x58180004,  //  0021  LDCONST	R6	K4
      0x7C0C0600,  //  0022  CALL	R3	3
      0x90021603,  //  0023  SETMBR	R0	K11	R3
      0x8C0C0506,  //  0024  GETMET	R3	R2	K6
      0x54160007,  //  0025  LDINT	R5	8
      0x08140205,  //  0026  MUL	R5	R1	R5
      0x58180004,  //  0027  LDCONST	R6	K4
      0x7C0C0600,  //  0028  CALL	R3	3
      0x90021803,  //  0029  SETMBR	R0	K12	R3
      0x8C0C0503,  //  002A  GETMET	R3	R2	K3
      0x00140304,  //  002B  ADD	R5	R1	K4
      0x58180004,  //  002C  LDCONST	R6	K4
      0x7C0C0600,  //  002D  CALL	R3	3
      0x90021A03,  //  002E  SETMBR	R0	K13	R3
      0x8C0C0503,  //  002F  GETMET	R3	R2	K3
      0x0014030A,  //  0030  ADD	R5	R1	K10
      0x5818000A,  //  0031  LDCONST	R6	K10
      0x7C0C0600,  //  0032  CALL	R3	3
      0x90021C03,  //  0033  SETMBR	R0	K14	R3
      0x8C0C0503,  //  0034  GETMET	R3	R2	K3
      0x54160003,  //  0035  LDINT	R5	4
      0x00140205,  //  0036  ADD	R5	R1	R5
      0x5818000A,  //  0037  LDCONST	R6	K10
      0x7C0C0600,  //  0038  CALL	R3	3
      0x90021E03,  //  0039  SETMBR	R0	K15	R3
      0x540E0005,  //  003A  LDINT	R3	6
      0x00040203,  //  003B  ADD	R1	R1	R3
      0x880C0105,  //  003C  GETMBR	R3	R0	K5
      0x780E0005,  //  003D  JMPF	R3	#0044
      0x8C0C0503,  //  003E  GETMET	R3	R2	K3
      0x5C140200,  //  003F  MOVE	R5	R1
      0x5818000A,  //  0040  LDCONST	R6	K10
      0x7C0C0600,  //  0041  CALL	R3	3
      0x90022003,  //  0042  SETMBR	R0	K16	R3
      0x0004030A,  //  0043  ADD	R1	R1	K10
      0x880C010B,  //  0044  GETMBR	R3	R0	K11
      0x780E0006,  //  0045  JMPF	R3	#004D
      0x8C0C0503,  //  0046  GETMET	R3	R2	K3
      0x5C140200,  //  0047  MOVE	R5	R1
      0x541A0003,  //  0048  LDINT	R6	4
      0x7C0C0600,  //  0049  CALL	R3	3
      0x90022203,  //  004A  SETMBR	R0	K17	R3
      0x540E0003,  //  004B  LDINT	R3	4
      0x00040203,  //  004C  ADD	R1	R1	R3
      0x880C0107,  //  004D  GETMBR	R3	R0	K7
      0x780E0005,  //  004E  JMPF	R3	#0055
      0x8C0C0503,  //  004F  GETMET	R3	R2	K3
      0x5C140200,  //  0050  MOVE	R5	R1
      0x5818000A,  //  0051  LDCONST	R6	K10
      0x7C0C0600,  //  0052  CALL	R3	3
      0x0010070A,  //  0053  ADD	R4	R3	K10
      0x00040204,  //  0054  ADD	R1	R1	R4
      0x90022401,  //  0055  SETMBR	R0	K18	R1
      0x80040000,  //  0056  RET	1	R0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: encrypt
********************************************************************/
be_local_closure(Matter_Frame_encrypt,   /* name */
  be_nested_proto(
    15,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[30]) {     /* constants */
    /* K0   */  be_nested_str_weak(crypto),
    /* K1   */  be_nested_str_weak(raw),
    /* K2   */  be_nested_str_weak(session),
    /* K3   */  be_nested_str_weak(get_r2i),
    /* K4   */  be_const_int(0),
    /* K5   */  be_nested_str_weak(payload_idx),
    /* K6   */  be_const_int(1),
    /* K7   */  be_const_int(2147483647),
    /* K8   */  be_nested_str_weak(add),
    /* K9   */  be_nested_str_weak(flags),
    /* K10  */  be_nested_str_weak(message_counter),
    /* K11  */  be_nested_str_weak(get_mode),
    /* K12  */  be_nested_str_weak(__CASE),
    /* K13  */  be_nested_str_weak(deviceid),
    /* K14  */  be_nested_str_weak(resize),
    /* K15  */  be_nested_str_weak(tasmota),
    /* K16  */  be_nested_str_weak(log),
    /* K17  */  be_nested_str_weak(MTR_X3A_X20cleartext_X3A_X20),
    /* K18  */  be_nested_str_weak(tohex),
    /* K19  */  be_const_int(3),
    /* K20  */  be_nested_str_weak(MTR_X3A_X20_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A_X2A),
    /* K21  */  be_nested_str_weak(MTR_X3A_X20r2i_X20_X20_X20_X20_X20_X20_X20_X20_X20_X3D),
    /* K22  */  be_nested_str_weak(MTR_X3A_X20p_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X3D),
    /* K23  */  be_nested_str_weak(MTR_X3A_X20a_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X3D),
    /* K24  */  be_nested_str_weak(MTR_X3A_X20n_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X20_X3D),
    /* K25  */  be_nested_str_weak(AES_CCM),
    /* K26  */  be_nested_str_weak(encrypt),
    /* K27  */  be_nested_str_weak(tag),
    /* K28  */  be_nested_str_weak(MTR_X3A_X20ciphertext_X20_X20_X3D),
    /* K29  */  be_nested_str_weak(MTR_X3A_X20tag_X20_X20_X20_X20_X20_X20_X20_X20_X20_X3D),
    }),
    be_str_weak(encrypt),
    &be_const_str_solidified,
    ( &(const binstruction[122]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x880C0102,  //  0002  GETMBR	R3	R0	K2
      0x8C100703,  //  0003  GETMET	R4	R3	K3
      0x7C100200,  //  0004  CALL	R4	1
      0x88140105,  //  0005  GETMBR	R5	R0	K5
      0x04140B06,  //  0006  SUB	R5	R5	K6
      0x40160805,  //  0007  CONNECT	R5	K4	R5
      0x94140405,  //  0008  GETIDX	R5	R2	R5
      0x88180105,  //  0009  GETMBR	R6	R0	K5
      0x40180D07,  //  000A  CONNECT	R6	R6	K7
      0x94180406,  //  000B  GETIDX	R6	R2	R6
      0x601C0015,  //  000C  GETGBL	R7	G21
      0x7C1C0000,  //  000D  CALL	R7	0
      0x8C200F08,  //  000E  GETMET	R8	R7	K8
      0x88280109,  //  000F  GETMBR	R10	R0	K9
      0x582C0006,  //  0010  LDCONST	R11	K6
      0x7C200600,  //  0011  CALL	R8	3
      0x8C200F08,  //  0012  GETMET	R8	R7	K8
      0x8828010A,  //  0013  GETMBR	R10	R0	K10
      0x542E0003,  //  0014  LDINT	R11	4
      0x7C200600,  //  0015  CALL	R8	3
      0x8C20070B,  //  0016  GETMET	R8	R3	K11
      0x7C200200,  //  0017  CALL	R8	1
      0x8824070C,  //  0018  GETMBR	R9	R3	K12
      0x1C201009,  //  0019  EQ	R8	R8	R9
      0x78220003,  //  001A  JMPF	R8	#001F
      0x8820070D,  //  001B  GETMBR	R8	R3	K13
      0x78220001,  //  001C  JMPF	R8	#001F
      0x8820070D,  //  001D  GETMBR	R8	R3	K13
      0x40200E08,  //  001E  CONNECT	R8	R7	R8
      0x8C200F0E,  //  001F  GETMET	R8	R7	K14
      0x542A000C,  //  0020  LDINT	R10	13
      0x7C200400,  //  0021  CALL	R8	2
      0xB8221E00,  //  0022  GETNGBL	R8	K15
      0x8C201110,  //  0023  GETMET	R8	R8	K16
      0x88280101,  //  0024  GETMBR	R10	R0	K1
      0x8C281512,  //  0025  GETMET	R10	R10	K18
      0x7C280200,  //  0026  CALL	R10	1
      0x002A220A,  //  0027  ADD	R10	K17	R10
      0x582C0013,  //  0028  LDCONST	R11	K19
      0x7C200600,  //  0029  CALL	R8	3
      0xB8221E00,  //  002A  GETNGBL	R8	K15
      0x8C201110,  //  002B  GETMET	R8	R8	K16
      0x58280014,  //  002C  LDCONST	R10	K20
      0x582C0013,  //  002D  LDCONST	R11	K19
      0x7C200600,  //  002E  CALL	R8	3
      0xB8221E00,  //  002F  GETNGBL	R8	K15
      0x8C201110,  //  0030  GETMET	R8	R8	K16
      0x8C280912,  //  0031  GETMET	R10	R4	K18
      0x7C280200,  //  0032  CALL	R10	1
      0x002A2A0A,  //  0033  ADD	R10	K21	R10
      0x582C0013,  //  0034  LDCONST	R11	K19
      0x7C200600,  //  0035  CALL	R8	3
      0xB8221E00,  //  0036  GETNGBL	R8	K15
      0x8C201110,  //  0037  GETMET	R8	R8	K16
      0x8C280D12,  //  0038  GETMET	R10	R6	K18
      0x7C280200,  //  0039  CALL	R10	1
      0x002A2C0A,  //  003A  ADD	R10	K22	R10
      0x582C0013,  //  003B  LDCONST	R11	K19
      0x7C200600,  //  003C  CALL	R8	3
      0xB8221E00,  //  003D  GETNGBL	R8	K15
      0x8C201110,  //  003E  GETMET	R8	R8	K16
      0x8C280B12,  //  003F  GETMET	R10	R5	K18
      0x7C280200,  //  0040  CALL	R10	1
      0x002A2E0A,  //  0041  ADD	R10	K23	R10
      0x582C0013,  //  0042  LDCONST	R11	K19
      0x7C200600,  //  0043  CALL	R8	3
      0xB8221E00,  //  0044  GETNGBL	R8	K15
      0x8C201110,  //  0045  GETMET	R8	R8	K16
      0x8C280F12,  //  0046  GETMET	R10	R7	K18
      0x7C280200,  //  0047  CALL	R10	1
      0x002A300A,  //  0048  ADD	R10	K24	R10
      0x582C0013,  //  0049  LDCONST	R11	K19
      0x7C200600,  //  004A  CALL	R8	3
      0x8C200319,  //  004B  GETMET	R8	R1	K25
      0x5C280800,  //  004C  MOVE	R10	R4
      0x5C2C0E00,  //  004D  MOVE	R11	R7
      0x5C300A00,  //  004E  MOVE	R12	R5
      0x6034000C,  //  004F  GETGBL	R13	G12
      0x5C380C00,  //  0050  MOVE	R14	R6
      0x7C340200,  //  0051  CALL	R13	1
      0x543A000F,  //  0052  LDINT	R14	16
      0x7C200C00,  //  0053  CALL	R8	6
      0x8C24111A,  //  0054  GETMET	R9	R8	K26
      0x5C2C0C00,  //  0055  MOVE	R11	R6
      0x7C240400,  //  0056  CALL	R9	2
      0x8C28111B,  //  0057  GETMET	R10	R8	K27
      0x7C280200,  //  0058  CALL	R10	1
      0xB82E1E00,  //  0059  GETNGBL	R11	K15
      0x8C2C1710,  //  005A  GETMET	R11	R11	K16
      0x58340014,  //  005B  LDCONST	R13	K20
      0x58380013,  //  005C  LDCONST	R14	K19
      0x7C2C0600,  //  005D  CALL	R11	3
      0xB82E1E00,  //  005E  GETNGBL	R11	K15
      0x8C2C1710,  //  005F  GETMET	R11	R11	K16
      0x8C341312,  //  0060  GETMET	R13	R9	K18
      0x7C340200,  //  0061  CALL	R13	1
      0x0036380D,  //  0062  ADD	R13	K28	R13
      0x58380013,  //  0063  LDCONST	R14	K19
      0x7C2C0600,  //  0064  CALL	R11	3
      0xB82E1E00,  //  0065  GETNGBL	R11	K15
      0x8C2C1710,  //  0066  GETMET	R11	R11	K16
      0x8C341512,  //  0067  GETMET	R13	R10	K18
      0x7C340200,  //  0068  CALL	R13	1
      0x00363A0D,  //  0069  ADD	R13	K29	R13
      0x58380013,  //  006A  LDCONST	R14	K19
      0x7C2C0600,  //  006B  CALL	R11	3
      0xB82E1E00,  //  006C  GETNGBL	R11	K15
      0x8C2C1710,  //  006D  GETMET	R11	R11	K16
      0x58340014,  //  006E  LDCONST	R13	K20
      0x58380013,  //  006F  LDCONST	R14	K19
      0x7C2C0600,  //  0070  CALL	R11	3
      0x882C0101,  //  0071  GETMBR	R11	R0	K1
      0x8C2C170E,  //  0072  GETMET	R11	R11	K14
      0x88340105,  //  0073  GETMBR	R13	R0	K5
      0x7C2C0400,  //  0074  CALL	R11	2
      0x882C0101,  //  0075  GETMBR	R11	R0	K1
      0x402C1609,  //  0076  CONNECT	R11	R11	R9
      0x882C0101,  //  0077  GETMBR	R11	R0	K1
      0x402C160A,  //  0078  CONNECT	R11	R11	R10
      0x80000000,  //  0079  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: build_standalone_ack
********************************************************************/
be_local_closure(Matter_Frame_build_standalone_ack,   /* name */
  be_nested_proto(
    11,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[28]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(message_handler),
    /* K2   */  be_nested_str_weak(flag_s),
    /* K3   */  be_nested_str_weak(flag_dsiz),
    /* K4   */  be_const_int(1),
    /* K5   */  be_nested_str_weak(dest_node_id_8),
    /* K6   */  be_nested_str_weak(source_node_id),
    /* K7   */  be_const_int(0),
    /* K8   */  be_nested_str_weak(session),
    /* K9   */  be_nested_str_weak(message_counter),
    /* K10  */  be_nested_str_weak(counter_snd),
    /* K11  */  be_nested_str_weak(next),
    /* K12  */  be_nested_str_weak(local_session_id),
    /* K13  */  be_nested_str_weak(initiator_session_id),
    /* K14  */  be_nested_str_weak(x_flag_i),
    /* K15  */  be_nested_str_weak(opcode),
    /* K16  */  be_nested_str_weak(exchange_id),
    /* K17  */  be_nested_str_weak(protocol_id),
    /* K18  */  be_nested_str_weak(x_flag_a),
    /* K19  */  be_nested_str_weak(ack_message_counter),
    /* K20  */  be_nested_str_weak(x_flag_r),
    /* K21  */  be_nested_str_weak(tasmota),
    /* K22  */  be_nested_str_weak(log),
    /* K23  */  be_nested_str_weak(format),
    /* K24  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X20_X20_X20_X20_X25s),
    /* K25  */  be_nested_str_weak(matter),
    /* K26  */  be_nested_str_weak(get_opcode_name),
    /* K27  */  be_const_int(2),
    }),
    be_str_weak(build_standalone_ack),
    &be_const_str_solidified,
    ( &(const binstruction[45]) {  /* code */
      0xA4060000,  //  0000  IMPORT	R1	K0
      0x60080006,  //  0001  GETGBL	R2	G6
      0x5C0C0000,  //  0002  MOVE	R3	R0
      0x7C080200,  //  0003  CALL	R2	1
      0x880C0101,  //  0004  GETMBR	R3	R0	K1
      0x7C080200,  //  0005  CALL	R2	1
      0x880C0102,  //  0006  GETMBR	R3	R0	K2
      0x780E0003,  //  0007  JMPF	R3	#000C
      0x900A0704,  //  0008  SETMBR	R2	K3	K4
      0x880C0106,  //  0009  GETMBR	R3	R0	K6
      0x900A0A03,  //  000A  SETMBR	R2	K5	R3
      0x70020000,  //  000B  JMP		#000D
      0x900A0707,  //  000C  SETMBR	R2	K3	K7
      0x880C0108,  //  000D  GETMBR	R3	R0	K8
      0x900A1003,  //  000E  SETMBR	R2	K8	R3
      0x880C0108,  //  000F  GETMBR	R3	R0	K8
      0x880C070A,  //  0010  GETMBR	R3	R3	K10
      0x8C0C070B,  //  0011  GETMET	R3	R3	K11
      0x7C0C0200,  //  0012  CALL	R3	1
      0x900A1203,  //  0013  SETMBR	R2	K9	R3
      0x880C0108,  //  0014  GETMBR	R3	R0	K8
      0x880C070D,  //  0015  GETMBR	R3	R3	K13
      0x900A1803,  //  0016  SETMBR	R2	K12	R3
      0x900A1D07,  //  0017  SETMBR	R2	K14	K7
      0x540E000F,  //  0018  LDINT	R3	16
      0x900A1E03,  //  0019  SETMBR	R2	K15	R3
      0x880C0110,  //  001A  GETMBR	R3	R0	K16
      0x900A2003,  //  001B  SETMBR	R2	K16	R3
      0x900A2307,  //  001C  SETMBR	R2	K17	K7
      0x900A2504,  //  001D  SETMBR	R2	K18	K4
      0x880C0109,  //  001E  GETMBR	R3	R0	K9
      0x900A2603,  //  001F  SETMBR	R2	K19	R3
      0x900A2907,  //  0020  SETMBR	R2	K20	K7
      0xB80E2A00,  //  0021  GETNGBL	R3	K21
      0x8C0C0716,  //  0022  GETMET	R3	R3	K22
      0x8C140317,  //  0023  GETMET	R5	R1	K23
      0x581C0018,  //  0024  LDCONST	R7	K24
      0xB8223200,  //  0025  GETNGBL	R8	K25
      0x8C20111A,  //  0026  GETMET	R8	R8	K26
      0x8828050F,  //  0027  GETMBR	R10	R2	K15
      0x7C200400,  //  0028  CALL	R8	2
      0x7C140600,  //  0029  CALL	R5	3
      0x5818001B,  //  002A  LDCONST	R6	K27
      0x7C0C0600,  //  002B  CALL	R3	3
      0x80040400,  //  002C  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: debug
********************************************************************/
be_local_closure(Matter_Frame_debug,   /* name */
  be_nested_proto(
    8,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[10]) {     /* constants */
    /* K0   */  be_nested_str_weak(matter),
    /* K1   */  be_nested_str_weak(Frame),
    /* K2   */  be_nested_str_weak(message_handler),
    /* K3   */  be_nested_str_weak(decode_header),
    /* K4   */  be_nested_str_weak(decode_payload),
    /* K5   */  be_nested_str_weak(tasmota),
    /* K6   */  be_nested_str_weak(log),
    /* K7   */  be_nested_str_weak(MTR_X3A_X20sending_X20decode_X3A_X20),
    /* K8   */  be_nested_str_weak(inspect),
    /* K9   */  be_const_int(3),
    }),
    be_str_weak(debug),
    &be_const_str_solidified,
    ( &(const binstruction[19]) {  /* code */
      0xB80A0000,  //  0000  GETNGBL	R2	K0
      0x8C080501,  //  0001  GETMET	R2	R2	K1
      0x88100102,  //  0002  GETMBR	R4	R0	K2
      0x5C140200,  //  0003  MOVE	R5	R1
      0x7C080600,  //  0004  CALL	R2	3
      0x8C0C0503,  //  0005  GETMET	R3	R2	K3
      0x7C0C0200,  //  0006  CALL	R3	1
      0x8C0C0504,  //  0007  GETMET	R3	R2	K4
      0x7C0C0200,  //  0008  CALL	R3	1
      0xB80E0A00,  //  0009  GETNGBL	R3	K5
      0x8C0C0706,  //  000A  GETMET	R3	R3	K6
      0xB8160000,  //  000B  GETNGBL	R5	K0
      0x8C140B08,  //  000C  GETMET	R5	R5	K8
      0x5C1C0400,  //  000D  MOVE	R7	R2
      0x7C140400,  //  000E  CALL	R5	2
      0x00160E05,  //  000F  ADD	R5	K7	R5
      0x58180009,  //  0010  LDCONST	R6	K9
      0x7C0C0600,  //  0011  CALL	R3	3
      0x80000000,  //  0012  RET	0
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: encode
********************************************************************/
be_local_closure(Matter_Frame_encode,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    2,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[30]) {     /* constants */
    /* K0   */  be_nested_str_weak(flags),
    /* K1   */  be_const_int(0),
    /* K2   */  be_nested_str_weak(flag_s),
    /* K3   */  be_nested_str_weak(flag_dsiz),
    /* K4   */  be_const_int(3),
    /* K5   */  be_nested_str_weak(add),
    /* K6   */  be_const_int(1),
    /* K7   */  be_nested_str_weak(local_session_id),
    /* K8   */  be_const_int(2),
    /* K9   */  be_nested_str_weak(sec_flags),
    /* K10  */  be_nested_str_weak(sec_p),
    /* K11  */  be_nested_str_weak(sec_c),
    /* K12  */  be_nested_str_weak(sec_sesstype),
    /* K13  */  be_nested_str_weak(message_counter),
    /* K14  */  be_nested_str_weak(source_node_id),
    /* K15  */  be_nested_str_weak(dest_node_id_8),
    /* K16  */  be_nested_str_weak(dest_node_id_2),
    /* K17  */  be_nested_str_weak(payload_idx),
    /* K18  */  be_nested_str_weak(x_flags),
    /* K19  */  be_nested_str_weak(x_flag_v),
    /* K20  */  be_nested_str_weak(x_flag_r),
    /* K21  */  be_nested_str_weak(x_flag_a),
    /* K22  */  be_nested_str_weak(x_flag_i),
    /* K23  */  be_nested_str_weak(opcode),
    /* K24  */  be_nested_str_weak(exchange_id),
    /* K25  */  be_nested_str_weak(protocol_id),
    /* K26  */  be_nested_str_weak(ack_message_counter),
    /* K27  */  be_nested_str_weak(app_payload_idx),
    /* K28  */  be_nested_str_weak(debug),
    /* K29  */  be_nested_str_weak(raw),
    }),
    be_str_weak(encode),
    &be_const_str_solidified,
    ( &(const binstruction[144]) {  /* code */
      0x60080015,  //  0000  GETGBL	R2	G21
      0x7C080000,  //  0001  CALL	R2	0
      0x880C0100,  //  0002  GETMBR	R3	R0	K0
      0x4C100000,  //  0003  LDNIL	R4
      0x1C0C0604,  //  0004  EQ	R3	R3	R4
      0x780E000D,  //  0005  JMPF	R3	#0014
      0x90020101,  //  0006  SETMBR	R0	K0	K1
      0x880C0102,  //  0007  GETMBR	R3	R0	K2
      0x780E0003,  //  0008  JMPF	R3	#000D
      0x880C0100,  //  0009  GETMBR	R3	R0	K0
      0x54120003,  //  000A  LDINT	R4	4
      0x300C0604,  //  000B  OR	R3	R3	R4
      0x90020003,  //  000C  SETMBR	R0	K0	R3
      0x880C0103,  //  000D  GETMBR	R3	R0	K3
      0x780E0004,  //  000E  JMPF	R3	#0014
      0x880C0100,  //  000F  GETMBR	R3	R0	K0
      0x88100103,  //  0010  GETMBR	R4	R0	K3
      0x2C100904,  //  0011  AND	R4	R4	K4
      0x300C0604,  //  0012  OR	R3	R3	R4
      0x90020003,  //  0013  SETMBR	R0	K0	R3
      0x8C0C0505,  //  0014  GETMET	R3	R2	K5
      0x88140100,  //  0015  GETMBR	R5	R0	K0
      0x58180006,  //  0016  LDCONST	R6	K6
      0x7C0C0600,  //  0017  CALL	R3	3
      0x8C0C0505,  //  0018  GETMET	R3	R2	K5
      0x88140107,  //  0019  GETMBR	R5	R0	K7
      0x78160001,  //  001A  JMPF	R5	#001D
      0x88140107,  //  001B  GETMBR	R5	R0	K7
      0x70020000,  //  001C  JMP		#001E
      0x58140001,  //  001D  LDCONST	R5	K1
      0x58180008,  //  001E  LDCONST	R6	K8
      0x7C0C0600,  //  001F  CALL	R3	3
      0x880C0109,  //  0020  GETMBR	R3	R0	K9
      0x4C100000,  //  0021  LDNIL	R4
      0x1C0C0604,  //  0022  EQ	R3	R3	R4
      0x780E0013,  //  0023  JMPF	R3	#0038
      0x90021301,  //  0024  SETMBR	R0	K9	K1
      0x880C010A,  //  0025  GETMBR	R3	R0	K10
      0x780E0003,  //  0026  JMPF	R3	#002B
      0x880C0109,  //  0027  GETMBR	R3	R0	K9
      0x5412007F,  //  0028  LDINT	R4	128
      0x300C0604,  //  0029  OR	R3	R3	R4
      0x90021203,  //  002A  SETMBR	R0	K9	R3
      0x880C010B,  //  002B  GETMBR	R3	R0	K11
      0x780E0003,  //  002C  JMPF	R3	#0031
      0x880C0109,  //  002D  GETMBR	R3	R0	K9
      0x5412003F,  //  002E  LDINT	R4	64
      0x300C0604,  //  002F  OR	R3	R3	R4
      0x90021203,  //  0030  SETMBR	R0	K9	R3
      0x880C010C,  //  0031  GETMBR	R3	R0	K12
      0x780E0004,  //  0032  JMPF	R3	#0038
      0x880C0109,  //  0033  GETMBR	R3	R0	K9
      0x8810010C,  //  0034  GETMBR	R4	R0	K12
      0x2C100904,  //  0035  AND	R4	R4	K4
      0x300C0604,  //  0036  OR	R3	R3	R4
      0x90021203,  //  0037  SETMBR	R0	K9	R3
      0x8C0C0505,  //  0038  GETMET	R3	R2	K5
      0x88140109,  //  0039  GETMBR	R5	R0	K9
      0x58180006,  //  003A  LDCONST	R6	K6
      0x7C0C0600,  //  003B  CALL	R3	3
      0x8C0C0505,  //  003C  GETMET	R3	R2	K5
      0x8814010D,  //  003D  GETMBR	R5	R0	K13
      0x541A0003,  //  003E  LDINT	R6	4
      0x7C0C0600,  //  003F  CALL	R3	3
      0x880C0102,  //  0040  GETMBR	R3	R0	K2
      0x780E0001,  //  0041  JMPF	R3	#0044
      0x880C010E,  //  0042  GETMBR	R3	R0	K14
      0x400C0403,  //  0043  CONNECT	R3	R2	R3
      0x880C0103,  //  0044  GETMBR	R3	R0	K3
      0x1C0C0706,  //  0045  EQ	R3	R3	K6
      0x780E0001,  //  0046  JMPF	R3	#0049
      0x880C010F,  //  0047  GETMBR	R3	R0	K15
      0x400C0403,  //  0048  CONNECT	R3	R2	R3
      0x880C0103,  //  0049  GETMBR	R3	R0	K3
      0x1C0C0708,  //  004A  EQ	R3	R3	K8
      0x780E0003,  //  004B  JMPF	R3	#0050
      0x8C0C0505,  //  004C  GETMET	R3	R2	K5
      0x88140110,  //  004D  GETMBR	R5	R0	K16
      0x58180008,  //  004E  LDCONST	R6	K8
      0x7C0C0600,  //  004F  CALL	R3	3
      0x600C000C,  //  0050  GETGBL	R3	G12
      0x5C100400,  //  0051  MOVE	R4	R2
      0x7C0C0200,  //  0052  CALL	R3	1
      0x90022203,  //  0053  SETMBR	R0	K17	R3
      0x880C0112,  //  0054  GETMBR	R3	R0	K18
      0x4C100000,  //  0055  LDNIL	R4
      0x1C0C0604,  //  0056  EQ	R3	R3	R4
      0x780E0016,  //  0057  JMPF	R3	#006F
      0x90022501,  //  0058  SETMBR	R0	K18	K1
      0x880C0113,  //  0059  GETMBR	R3	R0	K19
      0x780E0003,  //  005A  JMPF	R3	#005F
      0x880C0112,  //  005B  GETMBR	R3	R0	K18
      0x5412000F,  //  005C  LDINT	R4	16
      0x300C0604,  //  005D  OR	R3	R3	R4
      0x90022403,  //  005E  SETMBR	R0	K18	R3
      0x880C0114,  //  005F  GETMBR	R3	R0	K20
      0x780E0003,  //  0060  JMPF	R3	#0065
      0x880C0112,  //  0061  GETMBR	R3	R0	K18
      0x54120003,  //  0062  LDINT	R4	4
      0x300C0604,  //  0063  OR	R3	R3	R4
      0x90022403,  //  0064  SETMBR	R0	K18	R3
      0x880C0115,  //  0065  GETMBR	R3	R0	K21
      0x780E0002,  //  0066  JMPF	R3	#006A
      0x880C0112,  //  0067  GETMBR	R3	R0	K18
      0x300C0708,  //  0068  OR	R3	R3	K8
      0x90022403,  //  0069  SETMBR	R0	K18	R3
      0x880C0116,  //  006A  GETMBR	R3	R0	K22
      0x780E0002,  //  006B  JMPF	R3	#006F
      0x880C0112,  //  006C  GETMBR	R3	R0	K18
      0x300C0706,  //  006D  OR	R3	R3	K6
      0x90022403,  //  006E  SETMBR	R0	K18	R3
      0x8C0C0505,  //  006F  GETMET	R3	R2	K5
      0x88140112,  //  0070  GETMBR	R5	R0	K18
      0x58180006,  //  0071  LDCONST	R6	K6
      0x7C0C0600,  //  0072  CALL	R3	3
      0x8C0C0505,  //  0073  GETMET	R3	R2	K5
      0x88140117,  //  0074  GETMBR	R5	R0	K23
      0x58180006,  //  0075  LDCONST	R6	K6
      0x7C0C0600,  //  0076  CALL	R3	3
      0x8C0C0505,  //  0077  GETMET	R3	R2	K5
      0x88140118,  //  0078  GETMBR	R5	R0	K24
      0x58180008,  //  0079  LDCONST	R6	K8
      0x7C0C0600,  //  007A  CALL	R3	3
      0x8C0C0505,  //  007B  GETMET	R3	R2	K5
      0x88140119,  //  007C  GETMBR	R5	R0	K25
      0x58180008,  //  007D  LDCONST	R6	K8
      0x7C0C0600,  //  007E  CALL	R3	3
      0x880C0115,  //  007F  GETMBR	R3	R0	K21
      0x780E0003,  //  0080  JMPF	R3	#0085
      0x8C0C0505,  //  0081  GETMET	R3	R2	K5
      0x8814011A,  //  0082  GETMBR	R5	R0	K26
      0x541A0003,  //  0083  LDINT	R6	4
      0x7C0C0600,  //  0084  CALL	R3	3
      0x600C000C,  //  0085  GETGBL	R3	G12
      0x5C100400,  //  0086  MOVE	R4	R2
      0x7C0C0200,  //  0087  CALL	R3	1
      0x90023603,  //  0088  SETMBR	R0	K27	R3
      0x78060000,  //  0089  JMPF	R1	#008B
      0x400C0401,  //  008A  CONNECT	R3	R2	R1
      0x8C0C011C,  //  008B  GETMET	R3	R0	K28
      0x5C140400,  //  008C  MOVE	R5	R2
      0x7C0C0400,  //  008D  CALL	R3	2
      0x90023A02,  //  008E  SETMBR	R0	K29	R2
      0x80040400,  //  008F  RET	1	R2
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: build_response
********************************************************************/
be_local_closure(Matter_Frame_build_response,   /* name */
  be_nested_proto(
    12,                          /* nstack */
    3,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[30]) {     /* constants */
    /* K0   */  be_nested_str_weak(string),
    /* K1   */  be_nested_str_weak(message_handler),
    /* K2   */  be_nested_str_weak(flag_s),
    /* K3   */  be_nested_str_weak(flag_dsiz),
    /* K4   */  be_const_int(1),
    /* K5   */  be_nested_str_weak(dest_node_id_8),
    /* K6   */  be_nested_str_weak(source_node_id),
    /* K7   */  be_const_int(0),
    /* K8   */  be_nested_str_weak(session),
    /* K9   */  be_nested_str_weak(local_session_id),
    /* K10  */  be_nested_str_weak(initiator_session_id),
    /* K11  */  be_nested_str_weak(message_counter),
    /* K12  */  be_nested_str_weak(counter_snd),
    /* K13  */  be_nested_str_weak(next),
    /* K14  */  be_nested_str_weak(_counter_insecure_snd),
    /* K15  */  be_nested_str_weak(x_flag_i),
    /* K16  */  be_nested_str_weak(opcode),
    /* K17  */  be_nested_str_weak(exchange_id),
    /* K18  */  be_nested_str_weak(protocol_id),
    /* K19  */  be_nested_str_weak(x_flag_r),
    /* K20  */  be_nested_str_weak(x_flag_a),
    /* K21  */  be_nested_str_weak(ack_message_counter),
    /* K22  */  be_nested_str_weak(matter),
    /* K23  */  be_nested_str_weak(get_opcode_name),
    /* K24  */  be_nested_str_weak(format),
    /* K25  */  be_nested_str_weak(0x_X2502X),
    /* K26  */  be_nested_str_weak(tasmota),
    /* K27  */  be_nested_str_weak(log),
    /* K28  */  be_nested_str_weak(MTR_X3A_X20_X3CReplied_X20_X20_X20_X20_X20_X20_X20_X25s),
    /* K29  */  be_const_int(2),
    }),
    be_str_weak(build_response),
    &be_const_str_solidified,
    ( &(const binstruction[78]) {  /* code */
      0xA40E0000,  //  0000  IMPORT	R3	K0
      0x60100006,  //  0001  GETGBL	R4	G6
      0x5C140000,  //  0002  MOVE	R5	R0
      0x7C100200,  //  0003  CALL	R4	1
      0x88140101,  //  0004  GETMBR	R5	R0	K1
      0x7C100200,  //  0005  CALL	R4	1
      0x88140102,  //  0006  GETMBR	R5	R0	K2
      0x78160003,  //  0007  JMPF	R5	#000C
      0x90120704,  //  0008  SETMBR	R4	K3	K4
      0x88140106,  //  0009  GETMBR	R5	R0	K6
      0x90120A05,  //  000A  SETMBR	R4	K5	R5
      0x70020000,  //  000B  JMP		#000D
      0x90120707,  //  000C  SETMBR	R4	K3	K7
      0x88140108,  //  000D  GETMBR	R5	R0	K8
      0x90121005,  //  000E  SETMBR	R4	K8	R5
      0x88140109,  //  000F  GETMBR	R5	R0	K9
      0x20140B07,  //  0010  NE	R5	R5	K7
      0x7816000E,  //  0011  JMPF	R5	#0021
      0x88140108,  //  0012  GETMBR	R5	R0	K8
      0x7816000C,  //  0013  JMPF	R5	#0021
      0x88140108,  //  0014  GETMBR	R5	R0	K8
      0x88140B0A,  //  0015  GETMBR	R5	R5	K10
      0x20140B07,  //  0016  NE	R5	R5	K7
      0x78160008,  //  0017  JMPF	R5	#0021
      0x88140108,  //  0018  GETMBR	R5	R0	K8
      0x88140B0C,  //  0019  GETMBR	R5	R5	K12
      0x8C140B0D,  //  001A  GETMET	R5	R5	K13
      0x7C140200,  //  001B  CALL	R5	1
      0x90121605,  //  001C  SETMBR	R4	K11	R5
      0x88140108,  //  001D  GETMBR	R5	R0	K8
      0x88140B0A,  //  001E  GETMBR	R5	R5	K10
      0x90121205,  //  001F  SETMBR	R4	K9	R5
      0x70020005,  //  0020  JMP		#0027
      0x88140108,  //  0021  GETMBR	R5	R0	K8
      0x88140B0E,  //  0022  GETMBR	R5	R5	K14
      0x8C140B0D,  //  0023  GETMET	R5	R5	K13
      0x7C140200,  //  0024  CALL	R5	1
      0x90121605,  //  0025  SETMBR	R4	K11	R5
      0x90121307,  //  0026  SETMBR	R4	K9	K7
      0x90121F07,  //  0027  SETMBR	R4	K15	K7
      0x90122001,  //  0028  SETMBR	R4	K16	R1
      0x88140111,  //  0029  GETMBR	R5	R0	K17
      0x90122205,  //  002A  SETMBR	R4	K17	R5
      0x88140112,  //  002B  GETMBR	R5	R0	K18
      0x90122405,  //  002C  SETMBR	R4	K18	R5
      0x88140113,  //  002D  GETMBR	R5	R0	K19
      0x78160002,  //  002E  JMPF	R5	#0032
      0x90122904,  //  002F  SETMBR	R4	K20	K4
      0x8814010B,  //  0030  GETMBR	R5	R0	K11
      0x90122A05,  //  0031  SETMBR	R4	K21	R5
      0x780A0001,  //  0032  JMPF	R2	#0035
      0x58140004,  //  0033  LDCONST	R5	K4
      0x70020000,  //  0034  JMP		#0036
      0x58140007,  //  0035  LDCONST	R5	K7
      0x90122605,  //  0036  SETMBR	R4	K19	R5
      0x88140909,  //  0037  GETMBR	R5	R4	K9
      0x1C140B07,  //  0038  EQ	R5	R5	K7
      0x78160012,  //  0039  JMPF	R5	#004D
      0xB8162C00,  //  003A  GETNGBL	R5	K22
      0x8C140B17,  //  003B  GETMET	R5	R5	K23
      0x881C0910,  //  003C  GETMBR	R7	R4	K16
      0x7C140400,  //  003D  CALL	R5	2
      0x5C180A00,  //  003E  MOVE	R6	R5
      0x741A0004,  //  003F  JMPT	R6	#0045
      0x8C180718,  //  0040  GETMET	R6	R3	K24
      0x58200019,  //  0041  LDCONST	R8	K25
      0x88240910,  //  0042  GETMBR	R9	R4	K16
      0x7C180600,  //  0043  CALL	R6	3
      0x5C140C00,  //  0044  MOVE	R5	R6
      0xB81A3400,  //  0045  GETNGBL	R6	K26
      0x8C180D1B,  //  0046  GETMET	R6	R6	K27
      0x8C200718,  //  0047  GETMET	R8	R3	K24
      0x5828001C,  //  0048  LDCONST	R10	K28
      0x5C2C0A00,  //  0049  MOVE	R11	R5
      0x7C200600,  //  004A  CALL	R8	3
      0x5824001D,  //  004B  LDCONST	R9	K29
      0x7C180600,  //  004C  CALL	R6	3
      0x80040800,  //  004D  RET	1	R4
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified function: decode_header
********************************************************************/
be_local_closure(Matter_Frame_decode_header,   /* name */
  be_nested_proto(
    7,                          /* nstack */
    1,                          /* argc */
    2,                          /* varg */
    0,                          /* has upvals */
    NULL,                       /* no upvals */
    0,                          /* has sup protos */
    NULL,                       /* no sub protos */
    1,                          /* has constants */
    ( &(const bvalue[21]) {     /* constants */
    /* K0   */  be_const_int(0),
    /* K1   */  be_nested_str_weak(raw),
    /* K2   */  be_nested_str_weak(flags),
    /* K3   */  be_nested_str_weak(get),
    /* K4   */  be_const_int(1),
    /* K5   */  be_nested_str_weak(flag_s),
    /* K6   */  be_nested_str_weak(getbits),
    /* K7   */  be_const_int(2),
    /* K8   */  be_nested_str_weak(flag_dsiz),
    /* K9   */  be_const_int(3),
    /* K10  */  be_nested_str_weak(sec_flags),
    /* K11  */  be_nested_str_weak(sec_p),
    /* K12  */  be_nested_str_weak(sec_c),
    /* K13  */  be_nested_str_weak(sec_mx),
    /* K14  */  be_nested_str_weak(sec_sesstype),
    /* K15  */  be_nested_str_weak(local_session_id),
    /* K16  */  be_nested_str_weak(message_counter),
    /* K17  */  be_nested_str_weak(source_node_id),
    /* K18  */  be_nested_str_weak(dest_node_id_8),
    /* K19  */  be_nested_str_weak(dest_node_id_2),
    /* K20  */  be_nested_str_weak(payload_idx),
    }),
    be_str_weak(decode_header),
    &be_const_str_solidified,
    ( &(const binstruction[121]) {  /* code */
      0x58040000,  //  0000  LDCONST	R1	K0
      0x88080101,  //  0001  GETMBR	R2	R0	K1
      0x8C0C0503,  //  0002  GETMET	R3	R2	K3
      0x58140000,  //  0003  LDCONST	R5	K0
      0x58180004,  //  0004  LDCONST	R6	K4
      0x7C0C0600,  //  0005  CALL	R3	3
      0x90020403,  //  0006  SETMBR	R0	K2	R3
      0x880C0102,  //  0007  GETMBR	R3	R0	K2
      0x541200F7,  //  0008  LDINT	R4	248
      0x2C0C0604,  //  0009  AND	R3	R3	R4
      0x200C0700,  //  000A  NE	R3	R3	K0
      0x780E0001,  //  000B  JMPF	R3	#000E
      0x500C0000,  //  000C  LDBOOL	R3	0	0
      0x80040600,  //  000D  RET	1	R3
      0x8C0C0506,  //  000E  GETMET	R3	R2	K6
      0x58140007,  //  000F  LDCONST	R5	K7
      0x58180004,  //  0010  LDCONST	R6	K4
      0x7C0C0600,  //  0011  CALL	R3	3
      0x90020A03,  //  0012  SETMBR	R0	K5	R3
      0x8C0C0506,  //  0013  GETMET	R3	R2	K6
      0x58140000,  //  0014  LDCONST	R5	K0
      0x58180007,  //  0015  LDCONST	R6	K7
      0x7C0C0600,  //  0016  CALL	R3	3
      0x90021003,  //  0017  SETMBR	R0	K8	R3
      0x880C0108,  //  0018  GETMBR	R3	R0	K8
      0x1C0C0709,  //  0019  EQ	R3	R3	K9
      0x780E0001,  //  001A  JMPF	R3	#001D
      0x500C0000,  //  001B  LDBOOL	R3	0	0
      0x80040600,  //  001C  RET	1	R3
      0x8C0C0503,  //  001D  GETMET	R3	R2	K3
      0x58140009,  //  001E  LDCONST	R5	K9
      0x58180004,  //  001F  LDCONST	R6	K4
      0x7C0C0600,  //  0020  CALL	R3	3
      0x90021403,  //  0021  SETMBR	R0	K10	R3
      0x8C0C0506,  //  0022  GETMET	R3	R2	K6
      0x54160007,  //  0023  LDINT	R5	8
      0x08161205,  //  0024  MUL	R5	K9	R5
      0x541A0006,  //  0025  LDINT	R6	7
      0x00140A06,  //  0026  ADD	R5	R5	R6
      0x58180004,  //  0027  LDCONST	R6	K4
      0x7C0C0600,  //  0028  CALL	R3	3
      0x90021603,  //  0029  SETMBR	R0	K11	R3
      0x8C0C0506,  //  002A  GETMET	R3	R2	K6
      0x54160007,  //  002B  LDINT	R5	8
      0x08161205,  //  002C  MUL	R5	K9	R5
      0x541A0005,  //  002D  LDINT	R6	6
      0x00140A06,  //  002E  ADD	R5	R5	R6
      0x58180004,  //  002F  LDCONST	R6	K4
      0x7C0C0600,  //  0030  CALL	R3	3
      0x90021803,  //  0031  SETMBR	R0	K12	R3
      0x8C0C0506,  //  0032  GETMET	R3	R2	K6
      0x54160007,  //  0033  LDINT	R5	8
      0x08161205,  //  0034  MUL	R5	K9	R5
      0x541A0004,  //  0035  LDINT	R6	5
      0x00140A06,  //  0036  ADD	R5	R5	R6
      0x58180004,  //  0037  LDCONST	R6	K4
      0x7C0C0600,  //  0038  CALL	R3	3
      0x90021A03,  //  0039  SETMBR	R0	K13	R3
      0x8C0C0506,  //  003A  GETMET	R3	R2	K6
      0x54160007,  //  003B  LDINT	R5	8
      0x08161205,  //  003C  MUL	R5	K9	R5
      0x58180007,  //  003D  LDCONST	R6	K7
      0x7C0C0600,  //  003E  CALL	R3	3
      0x90021C03,  //  003F  SETMBR	R0	K14	R3
      0x880C010E,  //  0040  GETMBR	R3	R0	K14
      0x240C0704,  //  0041  GT	R3	R3	K4
      0x780E0001,  //  0042  JMPF	R3	#0045
      0x500C0000,  //  0043  LDBOOL	R3	0	0
      0x80040600,  //  0044  RET	1	R3
      0x8C0C0503,  //  0045  GETMET	R3	R2	K3
      0x58140004,  //  0046  LDCONST	R5	K4
      0x58180007,  //  0047  LDCONST	R6	K7
      0x7C0C0600,  //  0048  CALL	R3	3
      0x90021E03,  //  0049  SETMBR	R0	K15	R3
      0x8C0C0503,  //  004A  GETMET	R3	R2	K3
      0x54160003,  //  004B  LDINT	R5	4
      0x541A0003,  //  004C  LDINT	R6	4
      0x7C0C0600,  //  004D  CALL	R3	3
      0x90022003,  //  004E  SETMBR	R0	K16	R3
      0x540E0007,  //  004F  LDINT	R3	8
      0x00040203,  //  0050  ADD	R1	R1	R3
      0x880C0105,  //  0051  GETMBR	R3	R0	K5
      0x780E0006,  //  0052  JMPF	R3	#005A
      0x540E0006,  //  0053  LDINT	R3	7
      0x000C0203,  //  0054  ADD	R3	R1	R3
      0x400C0203,  //  0055  CONNECT	R3	R1	R3
      0x940C0403,  //  0056  GETIDX	R3	R2	R3
      0x90022203,  //  0057  SETMBR	R0	K17	R3
      0x540E0007,  //  0058  LDINT	R3	8
      0x00040203,  //  0059  ADD	R1	R1	R3
      0x880C0108,  //  005A  GETMBR	R3	R0	K8
      0x1C0C0704,  //  005B  EQ	R3	R3	K4
      0x780E0007,  //  005C  JMPF	R3	#0065
      0x540E0006,  //  005D  LDINT	R3	7
      0x000C0203,  //  005E  ADD	R3	R1	R3
      0x400C0203,  //  005F  CONNECT	R3	R1	R3
      0x940C0403,  //  0060  GETIDX	R3	R2	R3
      0x90022403,  //  0061  SETMBR	R0	K18	R3
      0x540E0007,  //  0062  LDINT	R3	8
      0x00040203,  //  0063  ADD	R1	R1	R3
      0x70020008,  //  0064  JMP		#006E
      0x880C0108,  //  0065  GETMBR	R3	R0	K8
      0x1C0C0707,  //  0066  EQ	R3	R3	K7
      0x780E0005,  //  0067  JMPF	R3	#006E
      0x8C0C0503,  //  0068  GETMET	R3	R2	K3
      0x5C140200,  //  0069  MOVE	R5	R1
      0x58180007,  //  006A  LDCONST	R6	K7
      0x7C0C0600,  //  006B  CALL	R3	3
      0x90022603,  //  006C  SETMBR	R0	K19	R3
      0x00040307,  //  006D  ADD	R1	R1	K7
      0x880C010D,  //  006E  GETMBR	R3	R0	K13
      0x780E0005,  //  006F  JMPF	R3	#0076
      0x8C0C0503,  //  0070  GETMET	R3	R2	K3
      0x5C140200,  //  0071  MOVE	R5	R1
      0x58180007,  //  0072  LDCONST	R6	K7
      0x7C0C0600,  //  0073  CALL	R3	3
      0x00100707,  //  0074  ADD	R4	R3	K7
      0x00040204,  //  0075  ADD	R1	R1	R4
      0x90022801,  //  0076  SETMBR	R0	K20	R1
      0x500C0200,  //  0077  LDBOOL	R3	1	0
      0x80040600,  //  0078  RET	1	R3
    })
  )
);
/*******************************************************************/


/********************************************************************
** Solidified class: Matter_Frame
********************************************************************/
be_local_class(Matter_Frame,
    30,
    NULL,
    be_nested_map(39,
    ( (struct bmapnode*) &(const bmapnode[]) {
        { be_const_key_weak(ack_message_counter, -1), be_const_var(27) },
        { be_const_key_weak(x_flag_r, -1), be_const_var(20) },
        { be_const_key_weak(dest_node_id_2, -1), be_const_var(15) },
        { be_const_key_weak(message_counter, -1), be_const_var(13) },
        { be_const_key_weak(sec_p, 15), be_const_var(9) },
        { be_const_key_weak(init, -1), be_const_closure(Matter_Frame_init_closure) },
        { be_const_key_weak(protocol_id, 31), be_const_var(25) },
        { be_const_key_weak(session, -1), be_const_var(1) },
        { be_const_key_weak(sec_flags, 13), be_const_var(8) },
        { be_const_key_weak(x_flag_sx, 20), be_const_var(19) },
        { be_const_key_weak(sec_mx, -1), be_const_var(11) },
        { be_const_key_weak(encode, -1), be_const_closure(Matter_Frame_encode_closure) },
        { be_const_key_weak(local_session_id, -1), be_const_var(7) },
        { be_const_key_weak(flags, 38), be_const_var(4) },
        { be_const_key_weak(exchange_id, -1), be_const_var(24) },
        { be_const_key_weak(payload_idx, 10), be_const_var(3) },
        { be_const_key_weak(dest_node_id_8, -1), be_const_var(16) },
        { be_const_key_weak(x_flag_i, -1), be_const_var(22) },
        { be_const_key_weak(flag_s, -1), be_const_var(5) },
        { be_const_key_weak(app_payload_idx, 14), be_const_var(29) },
        { be_const_key_weak(flag_dsiz, 12), be_const_var(6) },
        { be_const_key_weak(encrypt, -1), be_const_closure(Matter_Frame_encrypt_closure) },
        { be_const_key_weak(x_flags, -1), be_const_var(17) },
        { be_const_key_weak(x_flag_v, 22), be_const_var(18) },
        { be_const_key_weak(sec_sesstype, -1), be_const_var(12) },
        { be_const_key_weak(x_flag_a, -1), be_const_var(21) },
        { be_const_key_weak(message_handler, 28), be_const_var(0) },
        { be_const_key_weak(sec_extensions, 24), be_const_var(28) },
        { be_const_key_weak(raw, -1), be_const_var(2) },
        { be_const_key_weak(opcode, -1), be_const_var(23) },
        { be_const_key_weak(sec_c, 17), be_const_var(10) },
        { be_const_key_weak(decode_payload, 5), be_const_closure(Matter_Frame_decode_payload_closure) },
        { be_const_key_weak(build_standalone_ack, 2), be_const_closure(Matter_Frame_build_standalone_ack_closure) },
        { be_const_key_weak(vendor_id, -1), be_const_var(26) },
        { be_const_key_weak(debug, -1), be_const_closure(Matter_Frame_debug_closure) },
        { be_const_key_weak(source_node_id, 11), be_const_var(14) },
        { be_const_key_weak(build_response, -1), be_const_closure(Matter_Frame_build_response_closure) },
        { be_const_key_weak(decode_header, -1), be_const_closure(Matter_Frame_decode_header_closure) },
        { be_const_key_weak(decrypt, -1), be_const_closure(Matter_Frame_decrypt_closure) },
    })),
    be_str_weak(Matter_Frame)
);
/*******************************************************************/

void be_load_Matter_Frame_class(bvm *vm) {
    be_pushntvclass(vm, &be_class_Matter_Frame);
    be_setglobal(vm, "Matter_Frame");
    be_pop(vm, 1);
}
/********************************************************************/
/* End of solidification */
