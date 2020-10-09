LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_C_INCLUDES += $(MTK_LOCAL_C_INCLUDES)

# copy-n-paste from Makefile.am
libcharon_la_SOURCES := \
bus/bus.c bus/bus.h \
bus/listeners/listener.h \
bus/listeners/logger.h \
bus/listeners/file_logger.c \
bus/listeners/sys_logger.c \
config/backend_manager.c \
config/child_cfg.c \
config/ike_cfg.c \
config/peer_cfg.c \
config/proposal.c \
control/controller.c \
daemon.c \
encoding/generator.c \
encoding/message.c \
encoding/parser.c \
encoding/payloads/auth_payload.c \
encoding/payloads/cert_payload.c \
encoding/payloads/certreq_payload.c \
encoding/payloads/configuration_attribute.c \
encoding/payloads/cp_payload.c \
encoding/payloads/delete_payload.c \
encoding/payloads/eap_payload.c \
encoding/payloads/encodings.c \
encoding/payloads/encrypted_payload.c \
encoding/payloads/id_payload.c \
encoding/payloads/ike_header.c \
encoding/payloads/ke_payload.c \
encoding/payloads/nonce_payload.c \
encoding/payloads/notify_payload.c \
encoding/payloads/payload.c \
encoding/payloads/proposal_substructure.c \
encoding/payloads/sa_payload.c \
encoding/payloads/traffic_selector_substructure.c \
encoding/payloads/transform_attribute.c \
encoding/payloads/transform_substructure.c \
encoding/payloads/ts_payload.c \
encoding/payloads/unknown_payload.c \
encoding/payloads/vendor_id_payload.c \
encoding/payloads/hash_payload.c \
encoding/payloads/fragment_payload.c \
kernel_wrap/kernel_handler.c \
network/receiver.c \
network/sender.c \
network/socket.c \
network/socket_manager.c \
network/wod_channel.c \
processing/jobs/acquire_job.c \
processing/jobs/delete_child_sa_job.c \
processing/jobs/delete_ike_sa_job.c \
processing/jobs/migrate_job.c \
processing/jobs/process_message_job.c \
processing/jobs/rekey_child_sa_job.c \
processing/jobs/rekey_ike_sa_job.c \
processing/jobs/retransmit_job.c \
processing/jobs/retry_initiate_job.c \
processing/jobs/send_dpd_job.c \
processing/jobs/send_keepalive_job.c \
processing/jobs/start_action_job.c \
processing/jobs/roam_job.c \
processing/jobs/update_sa_job.c \
processing/jobs/inactivity_job.c \
processing/jobs/oos_timeout_job.c \
processing/jobs/detach_timeout_job.c \
sa/eap/eap_method.c \
sa/eap/eap_manager.c \
sa/xauth/xauth_method.c \
sa/xauth/xauth_manager.c \
sa/authenticator.c \
sa/child_sa.c\
sa/ike_sa.c \
sa/ike_sa_id.c \
sa/keymat.h sa/keymat.c \
sa/ike_sa_manager.c \
sa/task_manager.c \
sa/shunt_manager.c \
sa/redirect_manager.c \
sa/trap_manager.c \
sa/task.c \

libcharon_la_SOURCES += \
sa/ikev2/keymat_v2.c \
sa/ikev2/task_manager_v2.c \
sa/ikev2/authenticators/eap_authenticator.c \
sa/ikev2/authenticators/psk_authenticator.c \
sa/ikev2/authenticators/pubkey_authenticator.c \
sa/ikev2/tasks/child_create.c \
sa/ikev2/tasks/child_delete.c \
sa/ikev2/tasks/child_rekey.c \
sa/ikev2/tasks/ike_auth.c \
sa/ikev2/tasks/ike_cert_pre.c \
sa/ikev2/tasks/ike_cert_post.c \
sa/ikev2/tasks/ike_config.c \
sa/ikev2/tasks/ike_delete.c \
sa/ikev2/tasks/ike_dpd.c \
sa/ikev2/tasks/ike_init.c \
sa/ikev2/tasks/ike_natd.c \
sa/ikev2/tasks/ike_mobike.c \
sa/ikev2/tasks/ike_rekey.c \
sa/ikev2/tasks/ike_reauth.c \
sa/ikev2/tasks/ike_auth_lifetime.c \
sa/ikev2/tasks/ike_vendor.c \
sa/ikev2/tasks/child_config_update.c \
sa/ikev2/tasks/ike_query_device_identity.c \
sa/ikev2/tasks/ike_reauth_complete.c \
sa/ikev2/tasks/ike_verify_peer_cert.c \
sa/ikev2/tasks/ike_redirect.c

libcharon_la_SOURCES += \
sa/ikev1/keymat_v1.c \
sa/ikev1/task_manager_v1.c \
sa/ikev1/authenticators/psk_v1_authenticator.c \
sa/ikev1/authenticators/pubkey_v1_authenticator.c \
sa/ikev1/authenticators/hybrid_authenticator.c \
sa/ikev1/phase1.c \
sa/ikev1/tasks/main_mode.c \
sa/ikev1/tasks/aggressive_mode.c \
sa/ikev1/tasks/informational.c \
sa/ikev1/tasks/isakmp_cert_pre.c \
sa/ikev1/tasks/isakmp_cert_post.c \
sa/ikev1/tasks/isakmp_natd.c \
sa/ikev1/tasks/isakmp_vendor.c \
sa/ikev1/tasks/isakmp_delete.c \
sa/ikev1/tasks/isakmp_dpd.c \
sa/ikev1/tasks/xauth.c \
sa/ikev1/tasks/quick_mode.c \
sa/ikev1/tasks/quick_delete.c \
sa/ikev1/tasks/mode_config.c \
processing/jobs/dpd_timeout_job.c \
processing/jobs/adopt_children_job.c \

LOCAL_SRC_FILES := $(filter %.c,$(libcharon_la_SOURCES))

# adding the plugin source files

LOCAL_SRC_FILES += $(call add_plugin, android-dns)
ifneq ($(call plugin_enabled, android-dns),)
LOCAL_SHARED_LIBRARIES += libcutils
endif

LOCAL_SRC_FILES += $(call add_plugin, android-log)
ifneq ($(call plugin_enabled, android-log),)
LOCAL_LDLIBS += -llog
endif

LOCAL_SRC_FILES += $(call add_plugin, attr)

LOCAL_SRC_FILES += $(call add_plugin, eap-aka)

LOCAL_SRC_FILES += $(call add_plugin, eap-aka-3gpp2)
ifneq ($(call plugin_enabled, eap-aka-3gpp2),)
LOCAL_C_INCLUDES += $(libgmp_PATH)
LOCAL_SHARED_LIBRARIES += libgmp
endif

LOCAL_SRC_FILES += $(call add_plugin, updown)

LOCAL_SRC_FILES += $(call add_plugin, eap-gtc)

LOCAL_SRC_FILES += $(call add_plugin, eap-identity)

LOCAL_SRC_FILES += $(call add_plugin, eap-md5)

LOCAL_SRC_FILES += $(call add_plugin, eap-mschapv2)

LOCAL_SRC_FILES += $(call add_plugin, eap-sim)

LOCAL_SRC_FILES += $(call add_plugin, eap-simaka-sql)

LOCAL_SRC_FILES += $(call add_plugin, eap-simaka-pseudonym)

LOCAL_SRC_FILES += $(call add_plugin, eap-simaka-reauth)
ifneq ($(call plugin_enabled, eap-simaka-reauth),)
LOCAL_SHARED_LIBRARIES += libcutils
endif

LOCAL_SRC_FILES += $(call add_plugin, eap-sim-file)

# adding libakasim if either eap-aka or eap-sim is enabled
ifneq ($(or $(call plugin_enabled, eap-aka), $(call plugin_enabled, eap-sim)),)
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../libsimaka/
LOCAL_SHARED_LIBRARIES += libsimaka
endif

#LOCAL_SRC_FILES += $(addprefix ../libsimaka/, 
#		simaka_message.h simaka_message.c \
#		simaka_crypto.h simaka_crypto.c \
#		simaka_manager.h simaka_manager.c \
#		simaka_card.h simaka_provider.h simaka_hooks.h \
#	)

LOCAL_SRC_FILES += $(call add_plugin, eap-tls)

LOCAL_SRC_FILES += $(call add_plugin, eap-ttls)
ifneq ($(call plugin_enabled, eap-ttls),)
# for radius_message.h
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../libradius/
endif

LOCAL_SRC_FILES += $(call add_plugin, eap-peap)

LOCAL_SRC_FILES += $(call add_plugin, eap-tnc)
ifneq ($(call plugin_enabled, eap-tnc),)
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../libtnccs/ $(LOCAL_PATH)/../libtncif/
LOCAL_SHARED_LIBRARIES += libtnccs libtncif
endif

# adding libtls if any of the four plugins above is enabled
ifneq ($(or $(call plugin_enabled, eap-tls), $(call plugin_enabled, eap-ttls), \
			$(call plugin_enabled, eap-peap), $(call plugin_enabled, eap-tnc)),)
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../libtls

LOCAL_SRC_FILES += $(addprefix ../libtls/, \
		tls_protection.c tls_compression.c tls_fragmentation.c tls_alert.c \
		tls_crypto.c tls_prf.c tls_socket.c tls_eap.c tls_cache.c tls_peer.c \
		tls_server.c tls.c \
	)
endif

LOCAL_SRC_FILES += $(call add_plugin, load-tester)

LOCAL_SRC_FILES += $(call add_plugin, socket-default)

LOCAL_SRC_FILES += $(call add_plugin, socket-dynamic)

LOCAL_SRC_FILES += $(call add_plugin, stroke)
ifneq ($(call plugin_enabled, stroke),)
LOCAL_C_INCLUDES += $(LOCAL_PATH)/../stroke/
endif

# build libcharon --------------------------------------------------------------

LOCAL_C_INCLUDES += \
	$(strongswan_PATH)/src/include \
	$(strongswan_PATH)/src/libhydra \
	$(strongswan_PATH)/src/libstrongswan \
	$(TOP)/system/netd/include

LOCAL_CFLAGS := $(strongswan_CFLAGS)

LOCAL_MODULE := libcharon-ss
LOCAL_PROPRIETARY_MODULE := true
LOCAL_MODULE_OWNER := mtk

LOCAL_LDFLAGS  += -nodefaultlibs

LOCAL_MODULE_TAGS := optional

LOCAL_ARM_MODE := arm

LOCAL_PRELINK_MODULE := false

LOCAL_SHARED_LIBRARIES += libstrongswan libhydra libnetd_client

LOCAL_ADDITIONAL_DEPENDENCIES += $(strongswan_PATH)/Android.mk

ifdef MTK_SHARED_LIBRARY
	include $(MTK_SHARED_LIBRARY)
else
	include $(BUILD_SHARED_LIBRARY)
endif
