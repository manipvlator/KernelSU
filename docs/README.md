## *KernelSU*

<img src="https://kernelsu.org/logo.png" style="width: 96px;" alt="logo">A kernel-based root solution for Android devices.

---

## 🔧 KernelSU Integration (Recommended)

This project uses an enhanced integration method based on
[Backslashxx/KernelSU](https://github.com/backslashxx/KernelSU).

## 🚀 Quick Setup

Run this inside your kernel source:

```sh
curl -LSs "https://raw.githubusercontent.com/manipvlator/KernelSU/refs/heads/main/kernel/setup.sh" | bash -s main
```

This will automatically integrate KernelSU using the syscall method.

[You also need SusFS 2.2.0](https://github.com/JackA1ltman/NonGKI_Kernel_Build_2nd/tree/mainline/Patches/Patch)
---

✅ Supported Implementations

- [KSU Official](https://t.me/KernelSU_group/3234)
- [KernelSU-Next](https://t.me/ksunext_ci)
- [KowSU](https://t.me/kowsu_build)
- [MamboSU](https://t.me/WebsArch)
- [xxKSU](https://github.com/backslashxx/KernelSU/releases)
- [ReSukiSU](https://t.me/ReSukiSU/194821)

---

## ⚙️ Requirements

Before building your kernel:

- Remove all manual hook implementations (to avoid conflicts)

- Disable:
```config
CONFIG_KPROBES=n
```

- Enable:
```config
CONFIG_KSU=y
CONFIG_KSU_TAMPER_SYSCALL_TABLE=y
CONFIG_KSU_SUSFS=y
```

- Optional (for extra features like AVC log spoofing):
```config
CONFIG_KSU_EXTRAS=y
```


---

## 📝 Integration Notes

- Recommended to use a clean kernel source
- Do not mix with other hooking methods
- Always perform a full rebuild after changing configs