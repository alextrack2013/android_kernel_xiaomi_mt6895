# common KOs
obj-$(CONFIG_MTK_LOW_POWER_MODULE) += v1/

# platform dependent  KOs
ifeq ($(CONFIG_MTK_LPM_MT6895),m)
ifneq ($(wildcard $(srctree)/$(src)/mt6895),)
obj-$(CONFIG_MTK_LPM_MT6895) += mt6895/
endif
endif
