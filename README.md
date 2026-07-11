[![NO AI](https://no-ai-badge.nuxy.dev/badge.svg)](https://github.com/nuxy/no-ai-badge#no-ai-badge)

# WireBeaver

WireBeaver is a modern, cross-platform WireGuard client built for self-hosters.

WireGuard is an excellent VPN protocol, but managing more than a handful of servers quickly becomes frustrating. Configuration files end up scattered across devices, switching between servers is tedious, and many desktop clients either expose only the basics or are tightly coupled to a hosted service.

WireBeaver takes a different approach.

It doesn't sell VPN servers or require a subscription. You bring your own WireGuard configurations, and WireBeaver gives you a polished desktop experience for managing them.

Whether you're connecting to your homelab, a VPS, your home network, or a fleet of servers, WireBeaver is designed to make that experience simple without getting in your way.

## Features

WireBeaver is designed around everyday usability rather than configuration files.

Current and planned features include:

* Server browser with search and filtering
* Favorites and recent connections
* Automatic connection
* Kill switch
* Split tunneling
* Custom DNS
* Traffic statistics
* Connection history
* Background service
* System tray integration
* Notifications
* Multi-hop routing
* Port forwarding
* Optional encrypted cloud synchronization
* Automatic updates

The project intentionally focuses on WireGuard. Support for additional VPN protocols is not planned at this time.

## Privacy

WireBeaver works entirely without an account.

All configuration data is stored locally by default, and every feature required to manage your servers is available offline.

Creating an account is optional and only enables encrypted cloud synchronization between devices. Configuration data is encrypted on your device before it is uploaded, meaning the server stores encrypted blobs and never has access to your private keys or tunnel configurations.

The synchronization service is designed to be zero-knowledge.

## Architecture

WireBeaver consists of three components.

The desktop application is written in JavaFX and provides the user interface.

A background daemon written in Go is responsible for everything related to networking, including WireGuard management, routing, DNS configuration, firewall integration, traffic statistics, and communication with the operating system.

An optional Spring Boot backend powers the website, account management, encrypted synchronization, and issue reporting. The desktop client does not depend on the backend unless you choose to use cloud synchronization.

## Platform Support

WireBeaver targets the three major desktop operating systems:

* Windows
* Linux
* macOS

## Contributing

WireBeaver is an open-source project, and contributions are always welcome.

If you've found a bug, have an idea for a feature, or want to improve the codebase, feel free to open an issue or submit a pull request. Discussions are encouraged before larger changes to help keep the project consistent.

## License

Licensed under the MIT License.
