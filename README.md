# Alnico mod - Jedi Academy

## About
**Alnico mod** is a simple **server-side** modification for **Star Wars Jedi Knight: Jedi Academy** (JKA).

It just adds a few extra **configuration variables** (`cvars`), that allow server admins to:
- Disable the chat (or not),
- Set up a welcome message,
- Adjust the amount of fall damage,
- Modify the behavior of the *Disruptor rifle* and the *Stun Baton*,

And, in FFA, TFFA, Duel and CTF modes:
- **Configure which weapons / ammo / equipment the players spawn with**, (and you can omit the lightsaber, if you want),
- Change the amount of health / armor,
- Enable *"True Jedi"* and *"True Non Jedi"* modes:
  - The *"True Jedi"* mode prevents the player from using any weapon other than the lightsaber,
    or from picking up certain items (health, holdable items, ...)
  - The *"True Non Jedi"* mode disables force powers **(including jump level 1)**


## Configuration examples
For a full list of custom `cvars`, please have a look at the example configuration files:  
- [Shooter FFA](docs/Server.sample-shooter-ffa.cfg)
- [Shooter Duel](docs/Server.sample-shooter-duel.cfg)
- [Instagib CTF](docs/Server.sample-instagib-ctf.cfg)

They're setup as "shooter" modes, with no force powers, no lightsaber, and a slight speed increase.
At this point, it's basically Quake 3 with Star Wars assets. 😁

All 3 files contain the full list of Alnico-mod-specific `cvars`.


## Building
You only need to compile the **MP Game Library** project.


## License
**Alnico mod** is licensed under the [GPLv2](LICENSE.txt).

The source code is based on [**OpenJK**](https://github.com/JACoders/OpenJK). For reference, you can view the original README here:  
➡️ [README-original.md](README-original.md)


## Origin of the name
The mod is called **Alnico** because it just sounds cool.  
Also, because it was created by a guy who uses **Slash** as his in-game nickname.

If it makes it easier to remember, you can think of the following abbreviation:

💡 "**`Al`ter`n`at`i`ve `Co`nfiguration** mod"
