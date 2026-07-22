1. 安装 Ubuntu 操作系统
    - VMware-workstation-full-17.6.4-24832109.exe
    - ubuntu-22.04.5-desktop-amd64.iso

2. 配置 C语言环境
    - 在终端中执行以下命令，安装 GCC 编译器及 C 语言开发所需的基础工具：
        - sudo apt install build-essential -y
            - build-essential 是一个“元包”，它会自动帮你安装好：
                - gcc：C语言编译器
                - g++：C++编译器
                - make：项目构建工具
    - 安装完成后，再次执行：
        - gcc --version

3. 配置 VSCode
    - 安装依赖：打开终端，输入以下命令安装所需工具：
        - sudo apt update
        - sudo apt install -y wget gpg apt-transport-https
    - 导入GPG密钥：这是为了验证软件包的完整性。
        - wget -qO- https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > packages.microsoft.gpg
        - sudo install -D -o root -g root -m 644 packages.microsoft.gpg /etc/apt/trusted.gpg.d/packages.microsoft.gpg
    - 添加软件源：将VSCode的官方源添加到系统中。
        - sudo sh -c 'echo "deb [arch=amd64] https://packages.microsoft.com/repos/code stable main" > /etc/apt/sources.list.d/vscode.list'
    - 安装VSCode：更新源并安装。
        - sudo apt update
        - sudo apt install -y code
    - 下载插件 ‘C/C++ DevTools’ ‘C/C++ Extension Pack’ ‘C/C++ Themes’

**完成以上配置就可以在Ubuntu操作系统下使用VSCode进行C语言的学习了**