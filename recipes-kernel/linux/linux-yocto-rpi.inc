# Raspberry Pi

COMPATIBLE_MACHINE = "rpi"

# Currently, only the standard kernel is supported
TARGET_SUPPORTED_KTYPES = "standard"

# We don't have a BSP-specific branch in the repository
KBRANCH_DEFAULT_standard = "standard/base"

FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

SRC_URI += "file://${MACHINE}-standard.scc"
SRC_URI += "file://${MACHINE}-standard.cfg"

SRC_URI += "file://0001-smsx95xx-fix-crimes-against-truesize.patch"
SRC_URI += "file://0002-smsc95xx-Experimental-Enable-turbo_mode-and-packetsi.patch"
SRC_URI += "file://0003-Allow-mac-address-to-be-set-in-smsc95xx.patch"
SRC_URI += "file://0004-Protect-__release_resource-against-resources-without.patch"
SRC_URI += "file://0005-irq-bcm2836-Prevent-spurious-interrupts-and-trap-the.patch"
SRC_URI += "file://0006-irq-bcm2836-Avoid-Invalid-trigger-warning.patch"
SRC_URI += "file://0007-irqchip-bcm2835-Add-FIQ-support.patch"
SRC_URI += "file://0008-irqchip-irq-bcm2835-Add-2836-FIQ-support.patch"
SRC_URI += "file://0009-spidev-Add-spidev-compatible-string-to-silence-warni.patch"
SRC_URI += "file://0010-Revert-pinctrl-bcm2835-switch-to-GPIOLIB_IRQCHIP.patch"
SRC_URI += "file://0011-pinctrl-bcm2835-Set-base-to-0-give-expected-gpio-num.patch"
SRC_URI += "file://0012-pinctrl-bcm2835-Only-request-the-interrupts-listed-i.patch"
SRC_URI += "file://0013-spi-bcm2835-Support-pin-groups-other-than-7-11.patch"
SRC_URI += "file://0014-spi-bcm2835-Disable-forced-software-CS.patch"
SRC_URI += "file://0015-spi-bcm2835-Remove-unused-code.patch"
SRC_URI += "file://0016-ARM-bcm2835-Set-Serial-number-and-Revision.patch"
SRC_URI += "file://0017-dmaengine-bcm2835-Load-driver-early-and-support-lega.patch"
SRC_URI += "file://0018-firmware-Updated-mailbox-header.patch"
SRC_URI += "file://0019-rtc-Add-SPI-alias-for-pcf2123-driver.patch"
SRC_URI += "file://0020-watchdog-bcm2835-Support-setting-reboot-partition.patch"
SRC_URI += "file://0021-reboot-Use-power-off-rather-than-busy-spinning-when-.patch"
SRC_URI += "file://0022-bcm-Make-RASPBERRYPI_POWER-depend-on-PM.patch"
SRC_URI += "file://0023-Register-the-clocks-early-during-the-boot-process.patch"
SRC_URI += "file://0024-bcm2835-rng-Avoid-initialising-if-already-enabled.patch"
SRC_URI += "file://0025-kbuild-Ignore-dtco-targets-when-filtering-symbols.patch"
SRC_URI += "file://0026-BCM2835_DT-Fix-I2S-register-map.patch"
SRC_URI += "file://0027-clk-bcm2835-Mark-used-PLLs-and-dividers-CRITICAL.patch"
SRC_URI += "file://0028-clk-bcm2835-Add-claim-clocks-property.patch"
SRC_URI += "file://0029-clk-bcm2835-Correct-the-prediv-logic.patch"
SRC_URI += "file://0030-clk-bcm2835-Read-max-core-clock-from-firmware.patch"
SRC_URI += "file://0031-sound-Demote-deferral-errors-to-INFO-level.patch"
SRC_URI += "file://0032-Update-vfpmodule.c.patch"
SRC_URI += "file://0033-ASoC-bcm2835_i2s.c-relax-the-ch2-register-setting-fo.patch"
SRC_URI += "file://0034-i2c-bcm2835-Add-debug-support.patch"
SRC_URI += "file://0035-Main-bcm2708-bcm2709-linux-port.patch"
SRC_URI += "file://0036-Add-dwc_otg-driver.patch"
SRC_URI += "file://0037-bcm2708-framebuffer-driver.patch"
SRC_URI += "file://0038-dmaengine-Add-support-for-BCM2708.patch"
SRC_URI += "file://0039-MMC-added-alternative-MMC-driver.patch"
SRC_URI += "file://0040-Adding-bcm2835-sdhost-driver-and-an-overlay-to-enabl.patch"
SRC_URI += "file://0041-vc_mem-Add-vc_mem-driver-for-querying-firmware-memor.patch"
SRC_URI += "file://0042-vcsm-VideoCore-shared-memory-service-for-BCM2835.patch"
SRC_URI += "file://0043-Add-dev-gpiomem-device-for-rootless-user-GPIO-access.patch"
SRC_URI += "file://0044-Add-SMI-driver.patch"
SRC_URI += "file://0045-MISC-bcm2835-smi-use-clock-manager-and-fix-reload-is.patch"
SRC_URI += "file://0046-Add-SMI-NAND-driver.patch"
SRC_URI += "file://0047-lirc-added-support-for-RaspberryPi-GPIO.patch"
SRC_URI += "file://0048-Add-cpufreq-driver.patch"
SRC_URI += "file://0049-Added-hwmon-thermal-driver-for-reporting-core-temper.patch"
SRC_URI += "file://0050-Add-Chris-Boot-s-i2c-driver.patch"
SRC_URI += "file://0051-char-broadcom-Add-vcio-module.patch"
SRC_URI += "file://0052-firmware-bcm2835-Support-ARCH_BCM270x.patch"
SRC_URI += "file://0053-scripts-Add-mkknlimg-and-knlinfo-scripts-from-tools-.patch"
SRC_URI += "file://0054-BCM2708-Add-core-Device-Tree-support.patch"
SRC_URI += "file://0055-BCM270x_DT-Add-pwr_led-and-the-required-input-trigge.patch"
SRC_URI += "file://0056-fbdev-add-FBIOCOPYAREA-ioctl.patch"
SRC_URI += "file://0057-Speed-up-console-framebuffer-imageblit-function.patch"
SRC_URI += "file://0058-enabling-the-realtime-clock-1-wire-chip-DS1307-and-1.patch"
SRC_URI += "file://0059-Added-Device-IDs-for-August-DVB-T-205.patch"
SRC_URI += "file://0060-hid-Reduce-default-mouse-polling-interval-to-60Hz.patch"
SRC_URI += "file://0061-rpi-ft5406-Add-touchscreen-driver-for-pi-LCD-display.patch"
SRC_URI += "file://0062-Improve-__copy_to_user-and-__copy_from_user-performa.patch"
SRC_URI += "file://0063-gpio-poweroff-Allow-it-to-work-on-Raspberry-Pi.patch"
SRC_URI += "file://0064-mfd-Add-Raspberry-Pi-Sense-HAT-core-driver.patch"
SRC_URI += "file://0065-ASoC-Add-support-for-HifiBerry-DAC.patch"
SRC_URI += "file://0066-ASoC-Add-support-for-Rpi-DAC.patch"
SRC_URI += "file://0067-ASoC-wm8804-Implement-MCLK-configuration-options-add.patch"
SRC_URI += "file://0068-ASoC-BCM-Add-support-for-HiFiBerry-Digi.-Driver-is-b.patch"
SRC_URI += "file://0069-Add-IQaudIO-Sound-Card-support-for-Raspberry-Pi.patch"
SRC_URI += "file://0070-Added-support-for-HiFiBerry-DAC.patch"
SRC_URI += "file://0071-Added-driver-for-HiFiBerry-Amp-amplifier-add-on-boar.patch"
SRC_URI += "file://0072-Add-driver-for-rpi-proto.patch"
SRC_URI += "file://0073-RaspiDAC3-support.patch"
SRC_URI += "file://0074-Add-Support-for-JustBoom-Audio-boards.patch"
SRC_URI += "file://0075-ARM-adau1977-adc-Add-basic-machine-driver-for-adau19.patch"
SRC_URI += "file://0076-New-AudioInjector.net-Pi-soundcard-with-low-jitter-a.patch"
SRC_URI += "file://0077-Add-IQAudIO-Digi-WM8804-board-support.patch"
SRC_URI += "file://0078-New-driver-for-RRA-DigiDAC1-soundcard-using-WM8741-W.patch"
SRC_URI += "file://0079-Add-support-for-Dion-Audio-LOCO-DAC-AMP-HAT.patch"
SRC_URI += "file://0080-Allo-Piano-DAC-boards-Initial-2-channel-stereo-suppo.patch"
SRC_URI += "file://0081-Add-support-for-Allo-Piano-DAC-2.1-plus-add-on-board.patch"
SRC_URI += "file://0082-Add-support-for-Allo-Boss-DAC-add-on-board-for-Raspb.patch"
SRC_URI += "file://0083-Support-for-Blokas-Labs-pisound-board.patch"
SRC_URI += "file://0084-ASoC-Add-driver-for-Cirrus-Logic-Audio-Card.patch"
SRC_URI += "file://0085-sound-Support-for-Dion-Audio-LOCO-V2-DAC-AMP-HAT.patch"
SRC_URI += "file://0086-Add-support-for-Fe-Pi-audio-sound-card.-1867.patch"
SRC_URI += "file://0087-Add-support-for-the-AudioInjector.net-Octo-sound-car.patch"
SRC_URI += "file://0088-Driver-support-for-Google-voiceHAT-soundcard.patch"
SRC_URI += "file://0089-rpi_display-add-backlight-driver-and-overlay.patch"
SRC_URI += "file://0090-bcm2835-virtgpio-Virtual-GPIO-driver.patch"
SRC_URI += "file://0091-bcm2835-gpio-exp-Driver-for-GPIO-expander-via-mailbo.patch"
SRC_URI += "file://0092-amba_pl011-Don-t-use-DT-aliases-for-numbering.patch"
SRC_URI += "file://0093-amba_pl011-Round-input-clock-up.patch"
SRC_URI += "file://0094-net-Add-non-mainline-source-for-rtl8192cu-wlan.patch"
SRC_URI += "file://0095-net-Fix-rtl8192cu-build-errors-on-other-platforms.patch"
# Patch 0096 not needed since RCPL 5.
SRC_URI += "file://0097-brcm-adds-support-for-BCM43341-wifi.patch"
SRC_URI += "file://0098-brcmfmac-Mute-expected-startup-errors.patch"
SRC_URI += "file://0099-hci_h5-Don-t-send-conf_req-when-ACTIVE.patch"
SRC_URI += "file://0100-config-Add-default-configs.patch"
SRC_URI += "file://0101-Add-arm64-configuration-and-device-tree-differences.patch"
SRC_URI += "file://0102-ARM64-Make-it-work-again-on-4.9-1790.patch"
SRC_URI += "file://0103-ARM64-Enable-HDMI-audio-and-vc04_services-in-bcmrpi3.patch"
SRC_URI += "file://0104-ARM64-Run-bcmrpi3_defconfig-through-savedefconfig.patch"
SRC_URI += "file://0105-ARM64-Enable-Kernel-Address-Space-Randomization-1792.patch"
SRC_URI += "file://0106-ARM64-Fix-build-break-for-RTL8187-RTL8192CU-wifi.patch"
SRC_URI += "file://0107-ARM64-Enable-RTL8187-RTL8192CU-wifi-in-build-config.patch"
SRC_URI += "file://0108-ARM64-DWC_OTG-Port-dwc_otg-driver-to-ARM64.patch"
SRC_URI += "file://0109-ARM64-Round-Robin-dispatch-IRQs-between-CPUs.patch"
SRC_URI += "file://0110-ARM64-Enable-DWC_OTG-Driver-In-ARM64-Build-Config-bc.patch"
SRC_URI += "file://0111-ARM64-Force-hardware-emulation-of-deprecated-instruc.patch"
SRC_URI += "file://0112-build-arm64-Add-rules-for-.dtbo-files-for-dts-overla.patch"
SRC_URI += "file://0113-clk-bcm2835-Mark-GPIO-clocks-enabled-at-boot-as-crit.patch"
SRC_URI += "file://0114-pinctrl-bcm2835-Fix-interrupt-handling-for-GPIOs-28-.patch"
SRC_URI += "file://0115-ASoC-Add-prompt-for-ICS43432-codec.patch"
SRC_URI += "file://0116-bcm2835-aux-Add-aux-interrupt-controller.patch"
SRC_URI += "file://0117-mmc-read-mmc-alias-from-device-tree.patch"
SRC_URI += "file://0118-mmc-Add-MMC_QUIRK_ERASE_BROKEN-for-some-cards.patch"
SRC_URI += "file://0119-This-is-the-driver-for-Sony-CXD2880-DVB-T2-T-tuner-d.patch"
SRC_URI += "file://0120-raspberrypi-firmware-Define-the-MBOX-channel-in-the-.patch"
SRC_URI += "file://0121-raspberrypi-firmware-Export-the-general-transaction-.patch"
SRC_URI += "file://0122-drm-vc4-Add-a-mode-for-using-the-closed-firmware-for.patch"
SRC_URI += "file://0123-drm-vc4-Name-the-primary-and-cursor-planes-in-fkms.patch"
SRC_URI += "file://0124-drm-vc4-Add-DRM_DEBUG_ATOMIC-for-the-insides-of-fkms.patch"
SRC_URI += "file://0125-drm-vc4-Fix-sending-of-page-flip-completion-events-i.patch"
SRC_URI += "file://0126-vc4_fkms-Apply-firmware-overscan-offset-to-hardware-.patch"
SRC_URI += "file://0127-drm-vc4-Mark-the-device-as-active-when-enabling-runt.patch"
SRC_URI += "file://0128-mmc-Change-downstream-MMC-driver-CONFIG-option.patch"
SRC_URI += "file://0129-config-Add-CONFIG_I2C_ROBOTFUZZ_OSIF.patch"
SRC_URI += "file://0130-config-Add-FB_TFT_ST7789V-module.patch"
SRC_URI += "file://0131-fixup-rtl8192cu-fixes-from-milhouse.patch"
# Patch 0132 not needed since RCPL 3.
SRC_URI += "file://0133-config-Add-CONFIG_TOUCHSCREEN_GOODIX.patch"
SRC_URI += "file://0134-config-Add-CONFIG_TOUCHSCREEN_EDT_FT5X06.patch"
SRC_URI += "file://0135-config-Add-CONFIG_IPV6_SIT_6RD.patch"
SRC_URI += "file://0136-config-Add-CONFIG_IPV6_ROUTE_INFO.patch"
SRC_URI += "file://0137-clk-bcm2835-Limit-PCM-clock-to-OSC-and-PLLD_PER.patch"
SRC_URI += "file://0138-clk-bcm2835-Minimise-clock-jitter-for-PCM-clock.patch"
SRC_URI += "file://0139-dwc_otg-make-periodic-scheduling-behave-properly-for.patch"
SRC_URI += "file://0140-serial-8250-Add-CAP_MINI-set-for-bcm2835aux.patch"
SRC_URI += "file://0141-dwc_otg-fiq_fsm-Make-isochronous-compatibility-check.patch"
SRC_URI += "file://0142-config-Add-CONFIG_CAN_GS_USB.patch"
SRC_URI += "file://0143-dwc_otg-add-module-parameter-int_ep_interval_min.patch"
SRC_URI += "file://0144-dwc_otg-fiq_fsm-Add-non-periodic-TT-exclusivity-cons.patch"
SRC_URI += "file://0145-rtl8192-Fixup-build.patch"
SRC_URI += "file://0146-serial-8250-Fix-THRE-flag-usage-for-CAP_MINI.patch"
SRC_URI += "file://0147-BCM270X_DT-Add-midi-uart1-overlay.patch"
SRC_URI += "file://0148-overlays-README-remove-vestigial-SDIO-parameters.patch"
SRC_URI += "file://0149-SQUASH-mmc-Apply-ERASE_BROKEN-quirks-correctly.patch"
SRC_URI += "file://0150-ASoC-bcm2835-Add-support-for-TDM-modes.patch"
SRC_URI += "file://0151-ASoC-bcm2835-Support-left-right-justified-and-DSP-mo.patch"
SRC_URI += "file://0152-ASoC-bcm2835-Support-additional-samplerates-up-to-38.patch"
SRC_URI += "file://0153-ASoC-bcm2835-Enforce-full-symmetry.patch"
SRC_URI += "file://0154-config-add-missing-arizona-regulator-modules.patch"
SRC_URI += "file://0155-rtl8192-switch-to-netdev-priv_destructor.patch"
SRC_URI += "file://0156-Audioinjector-make-the-octo-and-pi-sound-cards-have-.patch"
SRC_URI += "file://0157-Audioinjector-octo-Make-the-playback-and-capture-sym.patch"
SRC_URI += "file://0158-BCM270X_DT-Add-bme280-and-bmp180-to-i2c-sensor-overl.patch"
SRC_URI += "file://0159-config-Add-CONFIG_BMP280-and-CONFIG_BMP280_I2C.patch"
SRC_URI += "file://0160-config-Enable-TI-TMP102-temp-sensor-module.patch"
SRC_URI += "file://0161-BCM270X_DT-Add-tmp102-to-i2c-sensor-overlay.patch"
SRC_URI += "file://0162-irq_bcm2836-Send-event-when-onlining-sleeping-cores.patch"
SRC_URI += "file://0163-overlays-Add-Goodix-overlay.patch"
SRC_URI += "file://0164-Add-device-tree-overlay-for-GPIO-connected-rotary-en.patch"
SRC_URI += "file://0165-mpu6050-device-tree-overlay-2031.patch"
SRC_URI += "file://0166-config-Adding-SENSOR_JC42.patch"
SRC_URI += "file://0167-BCM270X_DT-Improve-i2c-sensor-and-i2c-rtc-overlay.patch"
SRC_URI += "file://0168-Add-device-tree-config-for-htu21.patch"
SRC_URI += "file://0169-Allo-Digione-Driver-2048.patch"
SRC_URI += "file://0170-dma-bcm2708-Fix-module-compilation-of-CONFIG_DMA_BCM.patch"
SRC_URI += "file://0171-bcm2835-cpufreq-Change-licence-to-GPLv2.patch"
SRC_URI += "file://0172-bcm2708-Drop-CMA-alignment-from-FKMS-mode-as-well.patch"
SRC_URI += "file://0173-New-i2c-rtc-gpio-device-overlay-2092.patch"
SRC_URI += "file://0174-PianoPlus-Dual-Mono-Dual-Stereo-features-added-2069.patch"
SRC_URI += "file://0175-overlays-Add-gpio-shutdown-overlay-2103.patch"
SRC_URI += "file://0176-config-enable-generic-S-PDIF-codec-drivers-2104.patch"
SRC_URI += "file://0177-ARM64-enable-drivers-for-GPIO-expander-and-vcio.patch"
SRC_URI += "file://0178-bcm2835-mmc-Fix-DMA-usage.patch"
SRC_URI += "file://0179-Revert-bcm2835-mmc-Fix-DMA-usage.patch"
SRC_URI += "file://0180-bcm2835-mmc-Prevent-DMA-race-condition.patch"
SRC_URI += "file://0181-Revert-Revert-bcm2835-mmc-Fix-DMA-usage.patch"
SRC_URI += "file://0182-config-Add-CONFIG_W1_SLAVE_DS2438.patch"
SRC_URI += "file://0183-config-enhance-DualShock3-controller-support.patch"
SRC_URI += "file://0184-overlays-i2c1-bcm2708-Don-t-overwrite-i2c1-pins-node.patch"
SRC_URI += "file://0185-Sets-the-BCDC-priority-to-constant-0.patch"
SRC_URI += "file://0186-Fix-dependencies-broken-since-driver-was-renamed.patch"
SRC_URI += "file://0187-mm-Remove-the-PFN-busy-warning.patch"
SRC_URI += "file://0188-cache-export-clean-and-invalidate.patch"
SRC_URI += "file://0189-vcsm-Provide-new-ioctl-to-clean-invalidate-a-2D-bloc.patch"
SRC_URI += "file://0190-VCSM-Specify-pointers-in-IPC-msgs-as-uint32_t.patch"
SRC_URI += "file://0191-vcsm-code-style-Fix-comment-indentation.patch"
SRC_URI += "file://0192-vcsm-Convert-to-loading-via-device-tree.patch"
SRC_URI += "file://0193-VCSM-New-option-to-import-a-DMABUF-for-VPU-use.patch"
SRC_URI += "file://0194-vcsm-Remove-all-typedefs-from-vc_sm_defs.h-and-calli.patch"
SRC_URI += "file://0195-vcsm-Correct-block-comment-style-on-licence-headers.patch"
SRC_URI += "file://0196-vcsm-Fix-block-comment-formatting.patch"
SRC_URI += "file://0197-vcsm-Remove-typedef-of-VC_VCHI_SM_HANDLE_T.patch"
SRC_URI += "file://0198-vcsm-unsigned-int-preferred-over-unsigned-fixed.patch"
SRC_URI += "file://0199-vcsm-Fix-blank-lines-after-declarations.patch"
SRC_URI += "file://0200-vcsm-Fix-erroneous-space-in-if-statement.patch"
SRC_URI += "file://0201-vcsm-Fix-lots-of-block-quote-formatting-issues.patch"
SRC_URI += "file://0202-vcsm-Fix-indentation-of-switch-case-statement.patch"
SRC_URI += "file://0203-vcsm-Fix-spaces-around-operators.patch"
SRC_URI += "file://0204-vcsm-Fix-use-of-S_IRUGO-and-use-0444-instead.patch"
SRC_URI += "file://0205-vcsm-Correct-long-unsigned-int-to-unsigned-long.patch"
SRC_URI += "file://0206-vcsm-Fix-struct-vm_operations_struct-should-normally.patch"
SRC_URI += "file://0207-vcsm-Fix-void-function-return-statements-are-not-gen.patch"
SRC_URI += "file://0208-vcsm-Fix-Prefer-kcalloc-over-kzalloc-with-multiply.patch"
SRC_URI += "file://0209-vcsm-Remove-VC_SM_LOCK_CACHE_MODE_T-typedef.patch"
SRC_URI += "file://0210-vcsm-Replace-SM_RESOURCE_T-with-sm_resource_t.patch"
SRC_URI += "file://0211-vcsm-Replace-SM_STATS_T-with-sm_stats_t.patch"
SRC_URI += "file://0212-vcsm-Replace-SM_STATE_T-with-sm_state_t.patch"
SRC_URI += "file://0213-vcsm-Replace-SM_PRIV_DATA_T-with-sm_priv_data_t.patch"
SRC_URI += "file://0214-vcsm-Replace-SM_PDE_T-with-sm_pde_t.patch"
SRC_URI += "file://0215-vcsm-Handle-the-clean-invalidate-case-directly.patch"
