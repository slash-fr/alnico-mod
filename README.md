# Alnico mod - Jedi Academy

## Demo Video: Instagib FFA
[![Instagib FFA - YouTube Video](https://img.youtube.com/vi/m7Mc62nzCpY/0.jpg)](https://www.youtube.com/watch?v=m7Mc62nzCpY)

## Features
**Alnico mod** is a simple **server-side** modification for **Star Wars Jedi Knight: Jedi Academy** (JKA).

It mostly adds a few extra **configuration variables** (`cvars`), that allow server admins to:
- **Configure which weapons / ammo / equipment the players spawn with \[1\]**
  - You can omit the lightsaber, if you want
- Enable *"True Jedi"* and *"True Non Jedi"* modes \[1\]:
  - The *"True Jedi"* mode prevents the player from using any weapon other than the lightsaber,
    or from picking up certain items (health, holdable items, ...)
  - The *"True Non Jedi"* mode disables force powers **(including jump level 1)**
- Modify the behavior of the *disruptor rifle* and the *stun baton* (damage, firing rate, ammo usage, ...),
  - Allows for "instagib" modes
  - If the stun baton is configured to deal a lot of damage (typically, > 150 per second), bots will automatically
    use it at short range
- Enable a Quake-3-style "impressive" award for 2 consecutive disruptor hits, in supported clients 
  (e.g. TaystJK with `cg_drawRewards 2`)
- Disable the chat
- Set up a welcome message
- Change the amount of health / armor \[1\]
- Adjust the amount of fall damage

> \[1\] → Only in FFA, TFFA, Duel and CTF modes (i.e. not Holocron, Jedi Master, Power Duel, Siege, nor CTY).

Other features, not based on `cvars`:
- Allow the bots to play a sound (voice line) along with their text chats.
- Use triggers without referring to a Bmodel (brush model). This makes it easier to place them.

## Configuration examples
For a full list of custom `cvars`, please have a look at the example configuration files:  
- [Shooter FFA](docs/Server.sample-shooter-ffa.cfg)
- [Shooter Duel](docs/Server.sample-shooter-duel.cfg)
- [Instagib CTF](docs/Server.sample-instagib-ctf.cfg)

They're setup as "shooter" modes, with no force powers, no lightsaber, and a slight speed increase.
At this point, it's basically Quake 3 with Star Wars assets. 😁

All 3 files contain the full list of Alnico-mod-specific `cvars`.

---

For an example of the "bot chat sound" configuration, check out:
- [Alora.jkb](docs/Alora.jkb)
- [RoshPenin.jkb](docs/RoshPenin.jkb)

> **Tip:** It's highly recommended to improve the bots' fighting capabilities by tweaking the `reflex`, `accuracy`,
> `turnspeed`, `turnspeed_combat`, and `maxturn` values (and possibly `camper`).  
> (These settings aren't specific to Alnico mod).

---

Jump pads can be created using entity modding. For instance: 
```
{
"classname" "fx_runner"
"fxfile" "env/btend"
"origin" "-240 -1200 -63"
}
{
"classname" "trigger_multiple"
"target" "push_to_high_ground"
"origin" "-240 -1200 -63"
}
{
"classname" "target_push"
"targetname" "push_to_high_ground"
"origin" "-240 -1200 -63"
"target" "high_ground"
"spawnflags" "1"
}
{
"classname" "target_position"
"targetname" "high_ground" // It's over Anakin...
"origin" "-240 -1300 400"
}
```
The only difference with the base game is that `trigger_` entities do not require a `"model"` key anymore,
which means you don’t need to subtract the coordinates of the Bmodel from the origin of your `trigger_multiple`.


## Building
You only need to compile the **MP Game Library** project.


## License
**Alnico mod** is licensed under the [GPLv2](LICENSE.txt).

The source code is based on [**OpenJK**](https://github.com/JACoders/OpenJK).
For reference, you can view the original README here:  
➡️ [README-original.md](README-original.md)


## Origin of the name
The mod is called **Alnico** because it just sounds cool.  
Also, because it was created by a guy who uses **Slash** as his in-game nickname.

If it makes it easier to remember, you can think of the following abbreviation:

💡 "**`Al`ter`n`at`i`ve `Co`nfiguration** mod"
