## *KernelSU*

<img src="https://kernelsu.org/logo.png" style="width: 96px;" alt="logo">A kernel-based root solution for Android devices.

<p align="center">
  <a href="https://t.me/MasMasBertelur">
    <img src="https://img.shields.io/badge/Telegram-26A5E4?style=flat&logo=telegram&logoColor=white" />
  </a>
  <a href="https://sociabuzz.com/manipulator/tribe">
    <img src="https://img.shields.io/badge/Coffee-SociaBuzz-orange?style=flat&logo=buymeac&logoColor=white" />
  </a>
</p>

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

---

✅ Supported Implementations

- [KSU Official](https://t.me/KernelSU_group/3234)
- [KernelSU-Next](https://t.me/ksunext_ci)
- [KowSU](https://t.me/kowsu_build)
- [MamboSU](https://t.me/WebsArch)
- [xxKSU](https://github.com/backslashxx/KernelSU/releases)
- [BakaSU](https://t.me/BakaSU_Grp/4)

---

## ⚙️ Requirements

Before building your kernel:

- Remove all manual hook implementations (to avoid conflicts)

- Enable:
```config
CONFIG_KSU=y
CONFIG_KSU_TAMPER_SYSCALL_TABLE=y
```

- Disable:
```config
# CONFIG_KPROBES is not set
```

- Implant latest SusFS to your kernel source (opsional)

```config
CONFIG_KSU_SUSFS=y
```

---

## 📝 Integration Notes

- Recommended to use a clean kernel source
- Do not mix with other hooking methods
- Always perform a full rebuild after changing configs
