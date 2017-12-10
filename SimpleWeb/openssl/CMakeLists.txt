cmake_minimum_required( VERSION 3.1 )

find_package(Threads REQUIRED)
set(SSL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/ssl)
set(ENGINGES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/engines)
set(CRYPTO_DIR ${CMAKE_CURRENT_SOURCE_DIR}/crypto)
include_directories(BEFORE SYSTEM ${CMAKE_CURRENT_SOURCE_DIR} ${SSL_DIR} ${ENGINGES_DIR} ${CRYPTO_DIR}
${CRYPTO_DIR}/asn1 ${CRYPTO_DIR}/evp ${CRYPTO_DIR}/modes)

set(SSL_SRC ${SSL_DIR}/s2_meth.c ${SSL_DIR}/s2_srvr.c ${SSL_DIR}/s2_clnt.c ${SSL_DIR}/s2_lib.c 
${SSL_DIR}/s2_enc.c ${SSL_DIR}/s2_pkt.c ${SSL_DIR}/s3_meth.c ${SSL_DIR}/s3_srvr.c
${SSL_DIR}/s3_clnt.c ${SSL_DIR}/s3_lib.c ${SSL_DIR}/s3_enc.c ${SSL_DIR}/s3_pkt.c
${SSL_DIR}/s3_both.c ${SSL_DIR}/s23_meth.c ${SSL_DIR}/s23_srvr.c ${SSL_DIR}/s23_clnt.c
${SSL_DIR}/s23_lib.c ${SSL_DIR}/s23_pkt.c ${SSL_DIR}/t1_meth.c ${SSL_DIR}/t1_srvr.c
${SSL_DIR}/t1_clnt.c ${SSL_DIR}/t1_lib.c ${SSL_DIR}/t1_enc.c ${SSL_DIR}/d1_meth.c 
${SSL_DIR}/d1_srvr.c ${SSL_DIR}/d1_clnt.c ${SSL_DIR}/d1_lib.c ${SSL_DIR}/d1_pkt.c
${SSL_DIR}/d1_both.c ${SSL_DIR}/d1_enc.c ${SSL_DIR}/ssl_lib.c ${SSL_DIR}/ssl_err2.c
${SSL_DIR}/ssl_cert.c ${SSL_DIR}/ssl_sess.c ${SSL_DIR}/ssl_ciph.c ${SSL_DIR}/ssl_stat.c
${SSL_DIR}/ssl_rsa.c ${SSL_DIR}/ssl_asn1.c ${SSL_DIR}/ssl_txt.c ${SSL_DIR}/ssl_algs.c
${SSL_DIR}/bio_ssl.c ${SSL_DIR}/ssl_err.c ${SSL_DIR}/kssl.c ${SSL_DIR}/t1_reneg.c 
${SSL_DIR}/tls_srp.c ${SSL_DIR}/s3_cbc.c ${SSL_DIR}/d1_srtp.c)

set(ENGINES_SRC
${ENGINGES_DIR}/e_4758cca.c ${ENGINGES_DIR}/e_aep.c ${ENGINGES_DIR}/e_atalla.c
${ENGINGES_DIR}/e_cswift.c ${ENGINGES_DIR}/e_gmp.c ${ENGINGES_DIR}/e_chil.c
${ENGINGES_DIR}/e_nuron.c ${ENGINGES_DIR}/e_sureware.c ${ENGINGES_DIR}/e_ubsec.c
${ENGINGES_DIR}/e_padlock.c ${ENGINGES_DIR}/e_capi.c

${ENGINGES_DIR}/ccgost/e_gost_err.c ${ENGINGES_DIR}/ccgost/gost2001.c 
${ENGINGES_DIR}/ccgost/gost2001_keyx.c ${ENGINGES_DIR}/ccgost/gost89.c
${ENGINGES_DIR}/ccgost/gost94_keyx.c ${ENGINGES_DIR}/ccgost/gost_ameth.c 
${ENGINGES_DIR}/ccgost/gost_asn1.c ${ENGINGES_DIR}/ccgost/gost_crypt.c
${ENGINGES_DIR}/ccgost/gost_ctl.c ${ENGINGES_DIR}/ccgost/gost_eng.c
${ENGINGES_DIR}/ccgost/gosthash.c ${ENGINGES_DIR}/ccgost/gost_keywrap.c 
${ENGINGES_DIR}/ccgost/gost_md.c ${ENGINGES_DIR}/ccgost/gost_params.c
${ENGINGES_DIR}/ccgost/gost_pmeth.c ${ENGINGES_DIR}/ccgost/gost_sign.c)

set(CRYPTO_SRC 
${CRYPTO_DIR}/cryptlib.c ${CRYPTO_DIR}/mem.c ${CRYPTO_DIR}/mem_clr.c ${CRYPTO_DIR}/mem_dbg.c 
${CRYPTO_DIR}/cversion.c ${CRYPTO_DIR}/ex_data.c ${CRYPTO_DIR}/cpt_err.c ${CRYPTO_DIR}/ebcdic.c
${CRYPTO_DIR}/uid.c ${CRYPTO_DIR}/o_time.c ${CRYPTO_DIR}/o_str.c ${CRYPTO_DIR}/o_dir.c 
${CRYPTO_DIR}/o_init.c 

${CRYPTO_DIR}/aes/aes_core.c ${CRYPTO_DIR}/aes/aes_misc.c ${CRYPTO_DIR}/aes/aes_ecb.c ${CRYPTO_DIR}/aes/aes_cbc.c ${CRYPTO_DIR}/aes/aes_cfb.c ${CRYPTO_DIR}/aes/aes_ofb.c ${CRYPTO_DIR}/aes/aes_ctr.c ${CRYPTO_DIR}/aes/aes_ige.c 
${CRYPTO_DIR}/aes/aes_wrap.c

${CRYPTO_DIR}/asn1/a_object.c ${CRYPTO_DIR}/asn1/a_bitstr.c ${CRYPTO_DIR}/asn1/a_utctm.c ${CRYPTO_DIR}/asn1/a_gentm.c ${CRYPTO_DIR}/asn1/a_time.c ${CRYPTO_DIR}/asn1/a_int.c ${CRYPTO_DIR}/asn1/a_octet.c
${CRYPTO_DIR}/asn1/a_print.c ${CRYPTO_DIR}/asn1/a_type.c ${CRYPTO_DIR}/asn1/a_set.c ${CRYPTO_DIR}/asn1/a_dup.c ${CRYPTO_DIR}/asn1/a_d2i_fp.c ${CRYPTO_DIR}/asn1/a_i2d_fp.c ${CRYPTO_DIR}/asn1/a_enum.c ${CRYPTO_DIR}/asn1/a_utf8.c ${CRYPTO_DIR}/asn1/a_sign.c
${CRYPTO_DIR}/asn1/a_digest.c ${CRYPTO_DIR}/asn1/a_verify.c ${CRYPTO_DIR}/asn1/a_mbstr.c ${CRYPTO_DIR}/asn1/a_strex.c ${CRYPTO_DIR}/asn1/x_algor.c ${CRYPTO_DIR}/asn1/x_val.c ${CRYPTO_DIR}/asn1/x_pubkey.c ${CRYPTO_DIR}/asn1/x_sig.c
${CRYPTO_DIR}/asn1/x_req.c ${CRYPTO_DIR}/asn1/x_attrib.c ${CRYPTO_DIR}/asn1/x_bignum.c ${CRYPTO_DIR}/asn1/x_long.c ${CRYPTO_DIR}/asn1/x_name.c ${CRYPTO_DIR}/asn1/x_x509.c ${CRYPTO_DIR}/asn1/x_x509a.c ${CRYPTO_DIR}/asn1/x_crl.c ${CRYPTO_DIR}/asn1/x_info.c
${CRYPTO_DIR}/asn1/x_spki.c ${CRYPTO_DIR}/asn1/nsseq.c ${CRYPTO_DIR}/asn1/x_nx509.c ${CRYPTO_DIR}/asn1/d2i_pu.c ${CRYPTO_DIR}/asn1/d2i_pr.c ${CRYPTO_DIR}/asn1/i2d_pu.c ${CRYPTO_DIR}/asn1/i2d_pr.c ${CRYPTO_DIR}/asn1/t_req.c ${CRYPTO_DIR}/asn1/t_x509.c
${CRYPTO_DIR}/asn1/t_x509a.c ${CRYPTO_DIR}/asn1/t_crl.c ${CRYPTO_DIR}/asn1/t_pkey.c ${CRYPTO_DIR}/asn1/t_spki.c ${CRYPTO_DIR}/asn1/t_bitst.c ${CRYPTO_DIR}/asn1/tasn_new.c ${CRYPTO_DIR}/asn1/tasn_fre.c ${CRYPTO_DIR}/asn1/tasn_enc.c
${CRYPTO_DIR}/asn1/tasn_dec.c ${CRYPTO_DIR}/asn1/tasn_utl.c ${CRYPTO_DIR}/asn1/tasn_typ.c ${CRYPTO_DIR}/asn1/tasn_prn.c ${CRYPTO_DIR}/asn1/ameth_lib.c ${CRYPTO_DIR}/asn1/f_int.c ${CRYPTO_DIR}/asn1/f_string.c ${CRYPTO_DIR}/asn1/n_pkey.c
${CRYPTO_DIR}/asn1/f_enum.c ${CRYPTO_DIR}/asn1/x_pkey.c ${CRYPTO_DIR}/asn1/a_bool.c ${CRYPTO_DIR}/asn1/x_exten.c ${CRYPTO_DIR}/asn1/bio_asn1.c ${CRYPTO_DIR}/asn1/bio_ndef.c ${CRYPTO_DIR}/asn1/asn_mime.c ${CRYPTO_DIR}/asn1/asn1_gen.c
${CRYPTO_DIR}/asn1/asn1_par.c ${CRYPTO_DIR}/asn1/asn1_lib.c ${CRYPTO_DIR}/asn1/asn1_err.c ${CRYPTO_DIR}/asn1/a_bytes.c ${CRYPTO_DIR}/asn1/a_strnid.c ${CRYPTO_DIR}/asn1/evp_asn1.c ${CRYPTO_DIR}/asn1/asn_pack.c ${CRYPTO_DIR}/asn1/p5_pbe.c
${CRYPTO_DIR}/asn1/p5_pbev2.c ${CRYPTO_DIR}/asn1/p8_pkey.c ${CRYPTO_DIR}/asn1/asn_moid.c

${CRYPTO_DIR}/bf/bf_skey.c ${CRYPTO_DIR}/bf/bf_ecb.c ${CRYPTO_DIR}/bf/bf_enc.c ${CRYPTO_DIR}/bf/bf_cfb64.c ${CRYPTO_DIR}/bf/bf_ofb64.c

${CRYPTO_DIR}/bio/bio_lib.c ${CRYPTO_DIR}/bio/bio_cb.c ${CRYPTO_DIR}/bio/bio_err.c ${CRYPTO_DIR}/bio/bss_mem.c ${CRYPTO_DIR}/bio/bss_null.c ${CRYPTO_DIR}/bio/bss_fd.c ${CRYPTO_DIR}/bio/bss_file.c
${CRYPTO_DIR}/bio/bss_sock.c ${CRYPTO_DIR}/bio/bss_conn.c ${CRYPTO_DIR}/bio/bf_null.c ${CRYPTO_DIR}/bio/bf_buff.c ${CRYPTO_DIR}/bio/b_print.c ${CRYPTO_DIR}/bio/b_dump.c ${CRYPTO_DIR}/bio/b_sock.c ${CRYPTO_DIR}/bio/bss_acpt.c
${CRYPTO_DIR}/bio/bf_nbio.c ${CRYPTO_DIR}/bio/bss_log.c ${CRYPTO_DIR}/bio/bss_bio.c ${CRYPTO_DIR}/bio/bss_dgram.c

${CRYPTO_DIR}/bn/bn_add.c ${CRYPTO_DIR}/bn/bn_div.c ${CRYPTO_DIR}/bn/bn_exp.c ${CRYPTO_DIR}/bn/bn_lib.c ${CRYPTO_DIR}/bn/bn_ctx.c ${CRYPTO_DIR}/bn/bn_mul.c ${CRYPTO_DIR}/bn/bn_mod.c
${CRYPTO_DIR}/bn/bn_print.c ${CRYPTO_DIR}/bn/bn_rand.c ${CRYPTO_DIR}/bn/bn_shift.c ${CRYPTO_DIR}/bn/bn_word.c ${CRYPTO_DIR}/bn/bn_blind.c ${CRYPTO_DIR}/bn/bn_kron.c ${CRYPTO_DIR}/bn/bn_sqrt.c ${CRYPTO_DIR}/bn/bn_gcd.c
${CRYPTO_DIR}/bn/bn_prime.c ${CRYPTO_DIR}/bn/bn_err.c ${CRYPTO_DIR}/bn/bn_sqr.c ${CRYPTO_DIR}/bn/bn_asm.c ${CRYPTO_DIR}/bn/bn_recp.c ${CRYPTO_DIR}/bn/bn_mont.c ${CRYPTO_DIR}/bn/bn_mpi.c ${CRYPTO_DIR}/bn/bn_exp2.c ${CRYPTO_DIR}/bn/bn_gf2m.c
${CRYPTO_DIR}/bn/bn_nist.c ${CRYPTO_DIR}/bn/bn_depr.c ${CRYPTO_DIR}/bn/bn_const.c
 
${CRYPTO_DIR}/buffer/buffer.c ${CRYPTO_DIR}/buffer/buf_err.c ${CRYPTO_DIR}/buffer/buf_str.c

${CRYPTO_DIR}/camellia/camellia.c ${CRYPTO_DIR}/camellia/cmll_misc.c ${CRYPTO_DIR}/camellia/cmll_ecb.c ${CRYPTO_DIR}/camellia/cmll_cbc.c ${CRYPTO_DIR}/camellia/cmll_ofb.c
${CRYPTO_DIR}/camellia/cmll_cfb.c ${CRYPTO_DIR}/camellia/cmll_ctr.c ${CRYPTO_DIR}/camellia/cmll_utl.c

${CRYPTO_DIR}/cast/c_skey.c ${CRYPTO_DIR}/cast/c_ecb.c ${CRYPTO_DIR}/cast/c_enc.c ${CRYPTO_DIR}/cast/c_cfb64.c ${CRYPTO_DIR}/cast/c_ofb64.c

${CRYPTO_DIR}/cmac/cm_ameth.c ${CRYPTO_DIR}/cmac/cm_pmeth.c ${CRYPTO_DIR}/cmac/cmac.c

${CRYPTO_DIR}/cms/cms_lib.c ${CRYPTO_DIR}/cms/cms_asn1.c ${CRYPTO_DIR}/cms/cms_att.c ${CRYPTO_DIR}/cms/cms_io.c ${CRYPTO_DIR}/cms/cms_smime.c ${CRYPTO_DIR}/cms/cms_err.c
${CRYPTO_DIR}/cms/cms_sd.c ${CRYPTO_DIR}/cms/cms_dd.c ${CRYPTO_DIR}/cms/cms_cd.c ${CRYPTO_DIR}/cms/cms_env.c ${CRYPTO_DIR}/cms/cms_enc.c ${CRYPTO_DIR}/cms/cms_ess.c ${CRYPTO_DIR}/cms/cms_pwri.c

${CRYPTO_DIR}/comp/comp_lib.c ${CRYPTO_DIR}/comp/comp_err.c ${CRYPTO_DIR}/comp/c_rle.c ${CRYPTO_DIR}/comp/c_zlib.c

${CRYPTO_DIR}/conf/conf_err.c ${CRYPTO_DIR}/conf/conf_lib.c ${CRYPTO_DIR}/conf/conf_api.c ${CRYPTO_DIR}/conf/conf_def.c ${CRYPTO_DIR}/conf/conf_mod.c ${CRYPTO_DIR}/conf/conf_mall.c ${CRYPTO_DIR}/conf/conf_sap.c

${CRYPTO_DIR}/des/cbc_cksm.c ${CRYPTO_DIR}/des/cbc_enc.c ${CRYPTO_DIR}/des/cfb64enc.c ${CRYPTO_DIR}/des/cfb_enc.c ${CRYPTO_DIR}/des/ecb3_enc.c ${CRYPTO_DIR}/des/ecb_enc.c
${CRYPTO_DIR}/des/enc_read.c ${CRYPTO_DIR}/des/enc_writ.c ${CRYPTO_DIR}/des/fcrypt.c ${CRYPTO_DIR}/des/ofb64enc.c ${CRYPTO_DIR}/des/ofb_enc.c ${CRYPTO_DIR}/des/pcbc_enc.c ${CRYPTO_DIR}/des/qud_cksm.c ${CRYPTO_DIR}/des/rand_key.c
${CRYPTO_DIR}/des/rpc_enc.c ${CRYPTO_DIR}/des/set_key.c ${CRYPTO_DIR}/des/des_enc.c ${CRYPTO_DIR}/des/fcrypt_b.c ${CRYPTO_DIR}/des/xcbc_enc.c ${CRYPTO_DIR}/des/str2key.c ${CRYPTO_DIR}/des/cfb64ede.c ${CRYPTO_DIR}/des/ofb64ede.c
${CRYPTO_DIR}/des/ede_cbcm_enc.c ${CRYPTO_DIR}/des/des_old.c ${CRYPTO_DIR}/des/des_old2.c ${CRYPTO_DIR}/des/read2pwd.c

${CRYPTO_DIR}/dh/dh_asn1.c ${CRYPTO_DIR}/dh/dh_gen.c ${CRYPTO_DIR}/dh/dh_key.c ${CRYPTO_DIR}/dh/dh_lib.c ${CRYPTO_DIR}/dh/dh_check.c ${CRYPTO_DIR}/dh/dh_err.c ${CRYPTO_DIR}/dh/dh_depr.c
${CRYPTO_DIR}/dh/dh_ameth.c ${CRYPTO_DIR}/dh/dh_pmeth.c ${CRYPTO_DIR}/dh/dh_prn.c

${CRYPTO_DIR}/dsa/dsa_gen.c ${CRYPTO_DIR}/dsa/dsa_key.c ${CRYPTO_DIR}/dsa/dsa_lib.c ${CRYPTO_DIR}/dsa/dsa_asn1.c ${CRYPTO_DIR}/dsa/dsa_vrf.c ${CRYPTO_DIR}/dsa/dsa_sign.c
${CRYPTO_DIR}/dsa/dsa_err.c ${CRYPTO_DIR}/dsa/dsa_ossl.c ${CRYPTO_DIR}/dsa/dsa_depr.c ${CRYPTO_DIR}/dsa/dsa_ameth.c ${CRYPTO_DIR}/dsa/dsa_pmeth.c ${CRYPTO_DIR}/dsa/dsa_prn.c

${CRYPTO_DIR}/dso/dso_dl.c ${CRYPTO_DIR}/dso/dso_dlfcn.c ${CRYPTO_DIR}/dso/dso_err.c ${CRYPTO_DIR}/dso/dso_lib.c ${CRYPTO_DIR}/dso/dso_null.c ${CRYPTO_DIR}/dso/dso_openssl.c
${CRYPTO_DIR}/dso/dso_win32.c ${CRYPTO_DIR}/dso/dso_vms.c ${CRYPTO_DIR}/dso/dso_beos.c

${CRYPTO_DIR}/ec/ec_lib.c ${CRYPTO_DIR}/ec/ecp_smpl.c ${CRYPTO_DIR}/ec/ecp_mont.c ${CRYPTO_DIR}/ec/ecp_nist.c ${CRYPTO_DIR}/ec/ec_cvt.c ${CRYPTO_DIR}/ec/ec_mult.c ${CRYPTO_DIR}/ec/ec_err.c
${CRYPTO_DIR}/ec/ec_curve.c ${CRYPTO_DIR}/ec/ec_check.c ${CRYPTO_DIR}/ec/ec_print.c ${CRYPTO_DIR}/ec/ec_asn1.c ${CRYPTO_DIR}/ec/ec_key.c ${CRYPTO_DIR}/ec/ec2_smpl.c ${CRYPTO_DIR}/ec/ec2_mult.c ${CRYPTO_DIR}/ec/ec_ameth.c
${CRYPTO_DIR}/ec/ec_oct.c ${CRYPTO_DIR}/ec/ec_pmeth.c ${CRYPTO_DIR}/ec/eck_prn.c ${CRYPTO_DIR}/ec/ecp_oct.c ${CRYPTO_DIR}/ec/ec2_oct.c

${CRYPTO_DIR}/ecdh/ech_lib.c ${CRYPTO_DIR}/ecdh/ech_ossl.c ${CRYPTO_DIR}/ecdh/ech_key.c ${CRYPTO_DIR}/ecdh/ech_err.c

${CRYPTO_DIR}/ecdsa/ecs_lib.c ${CRYPTO_DIR}/ecdsa/ecs_asn1.c ${CRYPTO_DIR}/ecdsa/ecs_ossl.c ${CRYPTO_DIR}/ecdsa/ecs_sign.c ${CRYPTO_DIR}/ecdsa/ecs_vrf.c ${CRYPTO_DIR}/ecdsa/ecs_err.c

${CRYPTO_DIR}/engine/eng_err.c ${CRYPTO_DIR}/engine/eng_lib.c ${CRYPTO_DIR}/engine/eng_list.c ${CRYPTO_DIR}/engine/eng_init.c ${CRYPTO_DIR}/engine/eng_ctrl.c ${CRYPTO_DIR}/engine/eng_table.c
${CRYPTO_DIR}/engine/eng_pkey.c ${CRYPTO_DIR}/engine/eng_fat.c ${CRYPTO_DIR}/engine/eng_all.c ${CRYPTO_DIR}/engine/tb_rsa.c ${CRYPTO_DIR}/engine/tb_dsa.c ${CRYPTO_DIR}/engine/tb_ecdsa.c ${CRYPTO_DIR}/engine/tb_dh.c ${CRYPTO_DIR}/engine/tb_ecdh.c ${CRYPTO_DIR}/engine/tb_rand.c
${CRYPTO_DIR}/engine/tb_store.c ${CRYPTO_DIR}/engine/tb_cipher.c ${CRYPTO_DIR}/engine/tb_digest.c ${CRYPTO_DIR}/engine/tb_pkmeth.c ${CRYPTO_DIR}/engine/tb_asnmth.c ${CRYPTO_DIR}/engine/eng_openssl.c ${CRYPTO_DIR}/engine/eng_cnf.c
${CRYPTO_DIR}/engine/eng_dyn.c ${CRYPTO_DIR}/engine/eng_cryptodev.c ${CRYPTO_DIR}/engine/eng_rdrand.c ${CRYPTO_DIR}/engine/eng_rsax.c

${CRYPTO_DIR}/err/err.c ${CRYPTO_DIR}/err/err_all.c ${CRYPTO_DIR}/err/err_prn.c

${CRYPTO_DIR}/evp/encode.c ${CRYPTO_DIR}/evp/digest.c ${CRYPTO_DIR}/evp/evp_enc.c ${CRYPTO_DIR}/evp/evp_key.c ${CRYPTO_DIR}/evp/evp_acnf.c ${CRYPTO_DIR}/evp/e_des.c ${CRYPTO_DIR}/evp/e_bf.c
${CRYPTO_DIR}/evp/e_idea.c ${CRYPTO_DIR}/evp/e_des3.c ${CRYPTO_DIR}/evp/e_camellia.c ${CRYPTO_DIR}/evp/e_rc4.c ${CRYPTO_DIR}/evp/e_aes.c ${CRYPTO_DIR}/evp/names.c ${CRYPTO_DIR}/evp/e_seed.c ${CRYPTO_DIR}/evp/e_xcbc_d.c ${CRYPTO_DIR}/evp/e_rc2.c
${CRYPTO_DIR}/evp/e_cast.c ${CRYPTO_DIR}/evp/e_rc5.c ${CRYPTO_DIR}/evp/m_null.c ${CRYPTO_DIR}/evp/m_md2.c ${CRYPTO_DIR}/evp/m_md4.c ${CRYPTO_DIR}/evp/m_md5.c ${CRYPTO_DIR}/evp/m_sha.c ${CRYPTO_DIR}/evp/m_sha1.c ${CRYPTO_DIR}/evp/m_wp.c ${CRYPTO_DIR}/evp/m_dss.c
${CRYPTO_DIR}/evp/m_dss1.c ${CRYPTO_DIR}/evp/m_mdc2.c ${CRYPTO_DIR}/evp/m_ripemd.c ${CRYPTO_DIR}/evp/m_ecdsa.c ${CRYPTO_DIR}/evp/p_open.c ${CRYPTO_DIR}/evp/p_seal.c ${CRYPTO_DIR}/evp/p_sign.c ${CRYPTO_DIR}/evp/p_verify.c ${CRYPTO_DIR}/evp/p_lib.c
${CRYPTO_DIR}/evp/p_enc.c ${CRYPTO_DIR}/evp/p_dec.c ${CRYPTO_DIR}/evp/bio_md.c ${CRYPTO_DIR}/evp/bio_b64.c ${CRYPTO_DIR}/evp/bio_enc.c ${CRYPTO_DIR}/evp/evp_err.c ${CRYPTO_DIR}/evp/e_null.c ${CRYPTO_DIR}/evp/c_all.c ${CRYPTO_DIR}/evp/c_allc.c
${CRYPTO_DIR}/evp/c_alld.c ${CRYPTO_DIR}/evp/evp_lib.c ${CRYPTO_DIR}/evp/bio_ok.c ${CRYPTO_DIR}/evp/evp_pkey.c ${CRYPTO_DIR}/evp/evp_pbe.c ${CRYPTO_DIR}/evp/p5_crpt.c ${CRYPTO_DIR}/evp/p5_crpt2.c ${CRYPTO_DIR}/evp/e_old.c ${CRYPTO_DIR}/evp/pmeth_lib.c
${CRYPTO_DIR}/evp/pmeth_fn.c ${CRYPTO_DIR}/evp/pmeth_gn.c ${CRYPTO_DIR}/evp/m_sigver.c ${CRYPTO_DIR}/evp/evp_cnf.c ${CRYPTO_DIR}/evp/e_rc4_hmac_md5.c ${CRYPTO_DIR}/evp/e_aes_cbc_hmac_sha1.c

${CRYPTO_DIR}/hmac/hmac.c ${CRYPTO_DIR}/hmac/hm_ameth.c ${CRYPTO_DIR}/hmac/hm_pmeth.c

${CRYPTO_DIR}/idea/i_cbc.c ${CRYPTO_DIR}/idea/i_cfb64.c ${CRYPTO_DIR}/idea/i_ofb64.c ${CRYPTO_DIR}/idea/i_ecb.c ${CRYPTO_DIR}/idea/i_skey.c

${CRYPTO_DIR}/krb5/krb5_asn.c

${CRYPTO_DIR}/lhash/lhash.c ${CRYPTO_DIR}/lhash/lh_stats.c

${CRYPTO_DIR}/md4/md4_dgst.c ${CRYPTO_DIR}/md4/md4_one.c

${CRYPTO_DIR}/md5/md5_dgst.c ${CRYPTO_DIR}/md5/md5_one.c

${CRYPTO_DIR}/mdc2/mdc2dgst.c ${CRYPTO_DIR}/mdc2/mdc2_one.c

${CRYPTO_DIR}/modes/cbc128.c ${CRYPTO_DIR}/modes/ccm128.c ${CRYPTO_DIR}/modes/ctr128.c ${CRYPTO_DIR}/modes/cts128.c ${CRYPTO_DIR}/modes/cfb128.c ${CRYPTO_DIR}/modes/gcm128.c ${CRYPTO_DIR}/modes/ofb128.c ${CRYPTO_DIR}/modes/xts128.c

${CRYPTO_DIR}/objects/o_names.c ${CRYPTO_DIR}/objects/obj_dat.c ${CRYPTO_DIR}/objects/obj_lib.c ${CRYPTO_DIR}/objects/obj_err.c ${CRYPTO_DIR}/objects/obj_xref.c

${CRYPTO_DIR}/ocsp/ocsp_asn.c ${CRYPTO_DIR}/ocsp/ocsp_ext.c ${CRYPTO_DIR}/ocsp/ocsp_ht.c ${CRYPTO_DIR}/ocsp/ocsp_lib.c ${CRYPTO_DIR}/ocsp/ocsp_cl.c ${CRYPTO_DIR}/ocsp/ocsp_srv.c
${CRYPTO_DIR}/ocsp/ocsp_prn.c ${CRYPTO_DIR}/ocsp/ocsp_vfy.c ${CRYPTO_DIR}/ocsp/ocsp_err.c

${CRYPTO_DIR}/pem/pem_sign.c ${CRYPTO_DIR}/pem/pem_seal.c ${CRYPTO_DIR}/pem/pem_info.c ${CRYPTO_DIR}/pem/pem_lib.c ${CRYPTO_DIR}/pem/pem_all.c ${CRYPTO_DIR}/pem/pem_err.c
${CRYPTO_DIR}/pem/pem_x509.c ${CRYPTO_DIR}/pem/pem_xaux.c ${CRYPTO_DIR}/pem/pem_oth.c ${CRYPTO_DIR}/pem/pem_pk8.c ${CRYPTO_DIR}/pem/pem_pkey.c ${CRYPTO_DIR}/pem/pvkfmt.c

${CRYPTO_DIR}/pkcs12/p12_add.c ${CRYPTO_DIR}/pkcs12/p12_asn.c ${CRYPTO_DIR}/pkcs12/p12_attr.c ${CRYPTO_DIR}/pkcs12/p12_crpt.c ${CRYPTO_DIR}/pkcs12/p12_crt.c ${CRYPTO_DIR}/pkcs12/p12_decr.c
${CRYPTO_DIR}/pkcs12/p12_init.c ${CRYPTO_DIR}/pkcs12/p12_key.c ${CRYPTO_DIR}/pkcs12/p12_kiss.c ${CRYPTO_DIR}/pkcs12/p12_mutl.c ${CRYPTO_DIR}/pkcs12/p12_utl.c ${CRYPTO_DIR}/pkcs12/p12_npas.c ${CRYPTO_DIR}/pkcs12/pk12err.c ${CRYPTO_DIR}/pkcs12/p12_p8d.c
${CRYPTO_DIR}/pkcs12/p12_p8e.c

${CRYPTO_DIR}/pkcs7/pk7_asn1.c ${CRYPTO_DIR}/pkcs7/pk7_lib.c ${CRYPTO_DIR}/pkcs7/pkcs7err.c ${CRYPTO_DIR}/pkcs7/pk7_doit.c ${CRYPTO_DIR}/pkcs7/pk7_smime.c ${CRYPTO_DIR}/pkcs7/pk7_attr.c
${CRYPTO_DIR}/pkcs7/pk7_mime.c ${CRYPTO_DIR}/pkcs7/bio_pk7.c

${CRYPTO_DIR}/pqueue/pqueue.c

${CRYPTO_DIR}/rand/md_rand.c ${CRYPTO_DIR}/rand/randfile.c ${CRYPTO_DIR}/rand/rand_lib.c ${CRYPTO_DIR}/rand/rand_err.c ${CRYPTO_DIR}/rand/rand_egd.c ${CRYPTO_DIR}/rand/rand_win.c
${CRYPTO_DIR}/rand/rand_unix.c ${CRYPTO_DIR}/rand/rand_os2.c ${CRYPTO_DIR}/rand/rand_nw.c

${CRYPTO_DIR}/rc2/rc2_ecb.c ${CRYPTO_DIR}/rc2/rc2_skey.c ${CRYPTO_DIR}/rc2/rc2_cbc.c ${CRYPTO_DIR}/rc2/rc2cfb64.c ${CRYPTO_DIR}/rc2/rc2ofb64.c

${CRYPTO_DIR}/rc4/rc4_skey.c ${CRYPTO_DIR}/rc4/rc4_enc.c ${CRYPTO_DIR}/rc4/rc4_utl.c

${CRYPTO_DIR}/rc5/rc5_skey.c ${CRYPTO_DIR}/rc5/rc5_ecb.c ${CRYPTO_DIR}/rc5/rc5_enc.c ${CRYPTO_DIR}/rc5/rc5cfb64.c ${CRYPTO_DIR}/rc5/rc5ofb64.c

${CRYPTO_DIR}/ripemd/rmd_dgst.c ${CRYPTO_DIR}/ripemd/rmd_one.c

${CRYPTO_DIR}/rsa/rsa_eay.c ${CRYPTO_DIR}/rsa/rsa_gen.c ${CRYPTO_DIR}/rsa/rsa_lib.c ${CRYPTO_DIR}/rsa/rsa_sign.c ${CRYPTO_DIR}/rsa/rsa_saos.c ${CRYPTO_DIR}/rsa/rsa_err.c
${CRYPTO_DIR}/rsa/rsa_pk1.c ${CRYPTO_DIR}/rsa/rsa_ssl.c ${CRYPTO_DIR}/rsa/rsa_none.c ${CRYPTO_DIR}/rsa/rsa_oaep.c ${CRYPTO_DIR}/rsa/rsa_chk.c ${CRYPTO_DIR}/rsa/rsa_null.c ${CRYPTO_DIR}/rsa/rsa_pss.c ${CRYPTO_DIR}/rsa/rsa_x931.c
${CRYPTO_DIR}/rsa/rsa_asn1.c ${CRYPTO_DIR}/rsa/rsa_depr.c ${CRYPTO_DIR}/rsa/rsa_ameth.c ${CRYPTO_DIR}/rsa/rsa_prn.c ${CRYPTO_DIR}/rsa/rsa_pmeth.c ${CRYPTO_DIR}/rsa/rsa_crpt.c

${CRYPTO_DIR}/seed/seed.c ${CRYPTO_DIR}/seed/seed_ecb.c ${CRYPTO_DIR}/seed/seed_cbc.c ${CRYPTO_DIR}/seed/seed_cfb.c ${CRYPTO_DIR}/seed/seed_ofb.c

${CRYPTO_DIR}/sha/sha_dgst.c ${CRYPTO_DIR}/sha/sha1dgst.c ${CRYPTO_DIR}/sha/sha_one.c ${CRYPTO_DIR}/sha/sha1_one.c ${CRYPTO_DIR}/sha/sha256.c ${CRYPTO_DIR}/sha/sha512.c

${CRYPTO_DIR}/srp/srp_lib.c ${CRYPTO_DIR}/srp/srp_vfy.c

${CRYPTO_DIR}/stack/stack.c

${CRYPTO_DIR}/ts/ts_err.c ${CRYPTO_DIR}/ts/ts_req_utils.c ${CRYPTO_DIR}/ts/ts_req_print.c ${CRYPTO_DIR}/ts/ts_rsp_utils.c ${CRYPTO_DIR}/ts/ts_rsp_print.c
${CRYPTO_DIR}/ts/ts_rsp_sign.c ${CRYPTO_DIR}/ts/ts_rsp_verify.c ${CRYPTO_DIR}/ts/ts_verify_ctx.c ${CRYPTO_DIR}/ts/ts_lib.c ${CRYPTO_DIR}/ts/ts_conf.c ${CRYPTO_DIR}/ts/ts_asn1.c

${CRYPTO_DIR}/txt_db/txt_db.c

${CRYPTO_DIR}/ui/ui_err.c ${CRYPTO_DIR}/ui/ui_lib.c ${CRYPTO_DIR}/ui/ui_openssl.c ${CRYPTO_DIR}/ui/ui_util.c ${CRYPTO_DIR}/ui/ui_compat.c

${CRYPTO_DIR}/whrlpool/wp_dgst.c ${CRYPTO_DIR}/whrlpool/wp_block.c

${CRYPTO_DIR}/x509/x509_def.c ${CRYPTO_DIR}/x509/x509_d2.c ${CRYPTO_DIR}/x509/x509_r2x.c ${CRYPTO_DIR}/x509/x509_cmp.c ${CRYPTO_DIR}/x509/x509_obj.c ${CRYPTO_DIR}/x509/x509_req.c
${CRYPTO_DIR}/x509/x509spki.c ${CRYPTO_DIR}/x509/x509_vfy.c ${CRYPTO_DIR}/x509/x509_set.c ${CRYPTO_DIR}/x509/x509cset.c ${CRYPTO_DIR}/x509/x509rset.c ${CRYPTO_DIR}/x509/x509_err.c ${CRYPTO_DIR}/x509/x509name.c ${CRYPTO_DIR}/x509/x509_v3.c
${CRYPTO_DIR}/x509/x509_ext.c ${CRYPTO_DIR}/x509/x509_att.c ${CRYPTO_DIR}/x509/x509type.c ${CRYPTO_DIR}/x509/x509_lu.c ${CRYPTO_DIR}/x509/x_all.c ${CRYPTO_DIR}/x509/x509_txt.c ${CRYPTO_DIR}/x509/x509_trs.c ${CRYPTO_DIR}/x509/by_file.c
${CRYPTO_DIR}/x509/by_dir.c ${CRYPTO_DIR}/x509/x509_vpm.c

${CRYPTO_DIR}/x509v3/v3_bcons.c ${CRYPTO_DIR}/x509v3/v3_bitst.c ${CRYPTO_DIR}/x509v3/v3_conf.c ${CRYPTO_DIR}/x509v3/v3_extku.c ${CRYPTO_DIR}/x509v3/v3_ia5.c ${CRYPTO_DIR}/x509v3/v3_lib.c
${CRYPTO_DIR}/x509v3/v3_prn.c ${CRYPTO_DIR}/x509v3/v3_utl.c ${CRYPTO_DIR}/x509v3/v3err.c ${CRYPTO_DIR}/x509v3/v3_genn.c ${CRYPTO_DIR}/x509v3/v3_alt.c ${CRYPTO_DIR}/x509v3/v3_skey.c ${CRYPTO_DIR}/x509v3/v3_akey.c ${CRYPTO_DIR}/x509v3/v3_pku.c ${CRYPTO_DIR}/x509v3/v3_int.c
${CRYPTO_DIR}/x509v3/v3_enum.c ${CRYPTO_DIR}/x509v3/v3_sxnet.c ${CRYPTO_DIR}/x509v3/v3_cpols.c ${CRYPTO_DIR}/x509v3/v3_crld.c ${CRYPTO_DIR}/x509v3/v3_purp.c ${CRYPTO_DIR}/x509v3/v3_info.c ${CRYPTO_DIR}/x509v3/v3_ocsp.c ${CRYPTO_DIR}/x509v3/v3_akeya.c
${CRYPTO_DIR}/x509v3/v3_pmaps.c ${CRYPTO_DIR}/x509v3/v3_pcons.c ${CRYPTO_DIR}/x509v3/v3_ncons.c ${CRYPTO_DIR}/x509v3/v3_pcia.c ${CRYPTO_DIR}/x509v3/v3_pci.c ${CRYPTO_DIR}/x509v3/pcy_cache.c ${CRYPTO_DIR}/x509v3/pcy_node.c ${CRYPTO_DIR}/x509v3/pcy_data.c
${CRYPTO_DIR}/x509v3/pcy_map.c ${CRYPTO_DIR}/x509v3/pcy_tree.c ${CRYPTO_DIR}/x509v3/pcy_lib.c ${CRYPTO_DIR}/x509v3/v3_asid.c ${CRYPTO_DIR}/x509v3/v3_addr.c
)

add_library(openssl STATIC ${SSL_SRC} ${ENGINES_SRC} ${CRYPTO_SRC})

if(WIN32)
	target_compile_definitions(openssl PRIVATE -DOPENSSL_SYSNAME_WIN32 -DWIN32_LEAN_AND_MEAN )
endif()

if(WIN32 AND NOT CYGWIN)
	set_property(SOURCE ../engines/e_capi.c APPEND PROPERTY COMPILE_DEFINITIONS HEADER_OCSP_H )
	target_link_libraries(openssl ws2_32 crypt32 wsock32)
endif()

if( WIN32 AND MINGW AND NOT CYGWIN )
	set( OPENSSL_EXPORT_VAR_AS_FUNCTION true )
endif()

target_compile_definitions(openssl PUBLIC -DOPENSSL_NO_ASM -DOPENSSL_THREADS)
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/buildinf.h.cmake ${CMAKE_CURRENT_SOURCE_DIR}/crypto/buildinf.h )
configure_file(${CMAKE_CURRENT_SOURCE_DIR}/opensslconf.h.cmake ${CMAKE_CURRENT_SOURCE_DIR}/include/openssl/opensslconf.h )

target_include_directories(openssl PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(openssl ${CMAKE_THREAD_LIBS_INIT})
