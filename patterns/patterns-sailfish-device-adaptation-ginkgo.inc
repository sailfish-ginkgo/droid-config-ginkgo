# Feel free to disable non-critical HA parts during devel by commenting lines out
# Generated in hadk by executing: rpm/dhd/helpers/add_new_device.sh

%package -n patterns-sailfish-device-adaptation-ginkgo
Summary: Jolla HW Adaptation ginkgo
Requires: droid-hal-ginkgo
Requires: droid-hal-ginkgo-img-boot
Requires: droid-hal-ginkgo-kernel-modules
Requires: droid-config-ginkgo-sailfish
Requires: droid-config-ginkgo-pulseaudio-settings
Requires: droid-config-ginkgo-policy-settings
Requires: droid-config-ginkgo-preinit-plugin
Requires: droid-config-ginkgo-flashing
Requires: droid-config-ginkgo-bluez5
Requires: droid-hal-ginkgo-kernel-dtbo
Requires: droid-hal-ginkgo-tools
Requires: droid-hal-version-ginkgo

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Bluetooth
Requires: bluebinder

# Telephony
Requires: ofono-ril-binder-plugin
Requires: dummy_netd

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: libngf-qt5-qtfeedback

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl

# The -dummy-af is needed for newer devices that run the main
# audiosystem-passthrough in qti mode (e.g. >=Android 9 Qualcomm),
# to fix non-responding Camera app and/or voice during a phone call:
Requires: audiosystem-passthrough-dummy-af

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For hybris devices with droidmedia, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

# USB mode controller
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
Requires: jolla-devicelock-daemon-encsfa

# Enable home encryption
#Requires: sailfish-device-encryption

# For GPS
Requires: geoclue-provider-hybris

# For FM radio on some QCOM devices
Requires: qt5-qtmultimedia-plugin-mediaservice-irisradio
Requires: jolla-mediaplayer-radio

# For torch
Requires: jolla-settings-system-flashlight

# Additional packages
Requires: sd-utils

# For suspend to work with enabled Wi-Fi on newer Qualcomm devices
Requires: sailfish-connman-plugin-suspend

Requires: ohm-plugin-accessories >= 1.7.0
Requires: libgbinder-tools

#Provides: ofono-configs
#Obsoletes: ofono-configs-mer

# For debug sound cards
Requires: alsa-utils
# For Fingerprint
#Requires: sailfish-fpd-community
#Requires: droid-biometry-fp
#Requires: droid-fake-crypt
# NFC support
# 1. binder plugin requires Android 8 or a newer base
# 2. pn54x plugin talks directly to pn54x driver
# These plugins are mutually exclusive, you need to pick one:
#Requires: nfcd-binder-plugin
#Requires: nfcd-pn54x-plugin

%description -n patterns-sailfish-device-adaptation-ginkgo
Pattern with packages for ginkgo HW Adaptation

%files -n patterns-sailfish-device-adaptation-ginkgo
