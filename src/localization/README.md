# Localization Example

Adds a `demo` language. Texts that are missing in
`res/localization/demo/<feature>/<feature>.json` fall back to English.

## Listing the keys yourself

`add_language` calls `translate` once for every key that your JSON does not cover,
so a language without JSON files sees every key with its fallback text:

```cpp
static const char* dump_key(const char* key, const char* text, void*) {
    printf("%s = %s\n", key, text);
    return nullptr;
}

desc.translate = dump_key;
```

Returning `nullptr` keeps the fallback text.

## All keys (1190)

A key works in any of the feature files below. Using the same file as
Twilit Essentials makes it easier to find.

<details><summary><code>settings</code> (91)</summary>

| Key | English |
| --- | --- |
| `common.quiver` | Quiver |
| `common.bullet_time` | Bullet Time |
| `common.sprint` | Sprint |
| `common.swimming` | Swimming |
| `common.pushing_pulling` | Pushing & pulling |
| `common.wolf_sprint` | Wolf sprint |
| `common.slingshot_aiming` | Slingshot aiming |
| `common.bow_aiming` | Bow aiming |
| `common.ball_and_chain_aiming` | Ball and Chain aiming |
| `common.done` | Done |
| `common.visual_equipment` | Visual Equipment |
| `common.off` | Off |
| `common.on` | On |
| `common.enabled` | Enabled |
| `common.quick_access` | Quick Access |
| `common.cancel` | Cancel |
| `common.compass` | Compass |
| `tabs.general` | General |
| `tabs.quality_of_life` | Quality of Life |
| `tabs.combat` | Combat |
| `tabs.stamina_sprint` | Stamina & Sprint |
| `tabs.visuals` | Visuals |
| `tabs.menus` | Menus |
| `tabs.controls` | Controls |
| `tabs.party` | Party |
| `tabs.duel` | Duel |
| `tabs.customization` | Customization |
| `tabs.boss_rush` | Boss Rush |
| `common.graphics` | Graphics |
| `common.search` | Search |
| `search.placeholder` | Search settings |
| `search.type_to_search_all_twilit` | Type to search all Twilit Essentials settings. |
| `search.no_settings_found` | No settings found. |
| `search.description` | Search all settings and change them right here. |
| `search.search.help` | Several words narrow the search down, e.g. **stamina sprint**. |
| `known_issues.note_no_known_issues_right` | No known issues right now. |
| `known_issues.note_loading_known_issues` | Loading known issues... |
| `known_issues.note_could_not_load_known` | Could not load known issues. |
| `known_issues.note_known_issues_are_unavailable` | Known issues are unavailable in this build. |
| `panel.mod_settings` | Mod Settings... |
| `panel.help_text` | Need help, found a bug or have feedback? Let us know in the Twilit Essentials Discord channel: |
| `panel.view_channel_in_discord` | View channel in Discord |
| `panel.create_bug_report` | Create bug report |
| `panel.known_issues` | Known Issues |
| `panel.language` | Language |
| `panel.game_language` | Game language |
| `panel.preset` | Preset |
| `panel.preset_custom` | Custom |
| `panel.preset_default` | Default |
| `panel.preset_vanilla` | Vanilla |
| `panel.preset_comfort` | Comfort |
| `panel.preset_modern` | Modern |
| `panel.preset_ultra` | Ultra |
| `panel.preset_performance` | Performance |
| `panel.preset_custom_tip` | Your own settings. Changing any feature toggle switches back to this. |
| `panel.preset_default_tip` | Turns every feature on or off as it is out of the box. |
| `panel.preset_vanilla_tip` | Turns all features off for the original game experience. |
| `panel.preset_comfort_tip` | Quality-of-life helpers like Quick Access, map markers, HP bars and faster cutscenes, without new combat mechanics. |
| `panel.preset_modern_tip` | Comfort plus new combat and movement features like Stamina, Flurry Rush, Quick Draw and Third-Person Aim. |
| `panel.preset_ultra_tip` | Modern plus Photo Mode and every graphics upgrade: shadows, water, volumetric clouds and wind. |
| `panel.preset_performance_tip` | Default features with the demanding graphics features (shadows, water, clouds, wind) turned off. |
| `options.default` | Default |
| `options.botw_wheel` | BotW Wheel |
| `options.thinner` | Thinner |
| `options.hold` | Hold |
| `options.toggle` | Toggle |
| `options.d_pad_up` | D-Pad Up |
| `options.d_pad_down` | D-Pad Down |
| `options.d_pad_left` | D-Pad Left |
| `options.d_pad_right` | D-Pad Right |
| `options.l_d_pad_right` | L + D-Pad Right |
| `options.l_d_pad_down` | L + D-Pad Down |
| `options.action_a` | Action (A) |
| `options.sword_b` | Sword (B) |
| `options.item_x` | Item (X) |
| `options.item_y` | Item (Y) |
| `options.a_bottom` | A (bottom) |
| `options.b_right` | B (right) |
| `options.x_left` | X (left) |
| `options.y_top` | Y (top) |
| `options.cross_bottom` | Cross (bottom) |
| `options.circle_right` | Circle (right) |
| `options.square_left` | Square (left) |
| `options.triangle_top` | Triangle (top) |
| `options.b_bottom` | B (bottom) |
| `options.a_right` | A (right) |
| `options.y_left` | Y (left) |
| `options.x_top` | X (top) |
| `tabs.dungeon_rush` | Dungeon Rush |
| `tabs.replays` | Replays |
| `tabs.split_presets` | Splits |

</details>

<details><summary><code>general</code> (58)</summary>

| Key | English |
| --- | --- |
| `hud_auto_fade.fade_out_after` | Fade out after |
| `hud_auto_fade.fade_duration` | Fade duration |
| `hud_auto_fade.hud_auto_fade` | HUD Auto Fade |
| `hud_auto_fade.hud_auto_fade.help` | Idle time before the HUD fades out and how long the fade takes. |
| `general.description` | General options. |
| `general.skip_all_cutscenes` | Skip all cutscenes |
| `general.skip_all_cutscenes.help` | Automatically skips skippable cutscenes. Always on with **Skip even more**. |
| `general.skip_even_more` | Skip even more |
| `general.fast_forward_unskippable_cutscenes` | Fast-forward unskippable cutscenes |
| `general.fast_forward_unskippable_cutscenes.help` | **On**: unskippable cutscenes play faster.<br/>**Skip even more**: also skips all skippable cutscenes, speeds up doors and waits and shows dialogue instantly. Choices still wait for you. |
| `general.fast_forward_speed` | Fast-forward speed |
| `general.fast_forward_speed.help` | Speed of fast-forwarded cutscenes and doors. |
| `general.fast_door_animations` | Fast door animations |
| `general.fast_door_animations.help` | Speeds up only opening and walking through doors. Included in **Skip even more**. |
| `general.fast` | Fast |
| `general.vanilla` | Vanilla |
| `general.transition_speed` | Transition speed |
| `general.transition_speed.help` | **Fast**: faster room, door and map transitions.<br/>**Vanilla**: normal speed. |
| `general.enable_hud_auto_fade` | Enable HUD auto fade |
| `general.enable_hud_auto_fade.help` | Hides the HUD while Link stands still. |
| `general.hud_auto_fade_settings` | HUD Auto Fade Settings... |
| `general.hud_auto_fade_settings.help` | How long Link stands still before the HUD fades, and how long the fade takes. |
| `general.cosmetics_hd_textures` | Use HD textures for Cosmetics |
| `general.cosmetics_hd_textures.help` | Cosmetics recolors use your HD texture pack instead of the low-res originals. |
| `general.chu_jelly` | Chu Jelly |
| `general.chu_jelly.sword_coating` | Dip sword in Chu Jelly |
| `general.chu_jelly.sword_coating.help` | Draw your sword, stand next to the jelly a defeated **Chu** leaves behind and press {btn:A}. With jelly or lantern oil in a bottle: hover it in the item wheel and press {btn:R} (**Dip Sword**), Link coats the blade once you close the wheel.<br/>**Red**: 30% chance of a critical hit with triple damage.<br/>**Purple**: strong poison, extra damage and heavy damage over 10 seconds.<br/>**Yellow**: fire sword for 10 seconds, extra damage and sets enemies on fire.<br/>**Blue**: every hit heals a quarter heart.<br/>**Rare**: all of them.<br/>Lasts 20 hits or 90 seconds and washes off in water. A colored outline around the sword icon on {btn:B} shrinks from top to bottom as the coating wears off. |
| `general.chu_jelly.ring_dip_sword` | Dip Sword |
| `general.chu_jelly.debug_spawn_red` | Debug: spawn Red Chu |
| `general.chu_jelly.debug_spawn_purple` | Debug: spawn Purple Chu |
| `general.chu_jelly.debug_spawn_yellow` | Debug: spawn Yellow Chu |
| `general.chu_jelly.debug_spawn_blue` | Debug: spawn Blue Chu |
| `general.chu_jelly.debug_spawn_rare` | Debug: spawn Rare Chu |
| `general.indicator` | Indicator |
| `general.indicator.damage_vignette` | Damage vignette |
| `general.indicator.damage_vignette.help` | Red screen edges when hit and at low health. |
| `general.indicator.drowning_vignette` | Drowning vignette |
| `general.indicator.drowning_vignette.help` | Blue screen edges when running out of air. |
| `general.indicator.intensity` | Intensity |
| `general.indicator.intensity.help` | Strength of both vignettes. |
| `general.camera` | Camera |
| `general.camera.free_camera_distance` | Free camera distance |
| `general.camera.free_camera_distance.help` | Camera distance to Link with the Free Camera. |
| `general.camera.allow_for_z_target` | Allow for Z target |
| `general.camera.allow_for_z_target.help` | Also uses this distance while Z-targeting. |
| `general.camera.sprint_fov_kick` | Sprint FOV kick |
| `general.camera.sprint_fov_kick.help` | Slightly widens the view while sprinting. |
| `general.camera.third_person_aim` | Third-person camera |
| `general.camera.third_person_aim.help` | Aim over Link's shoulder. |
| `general.camera.photo_mode` | Photo mode |
| `general.camera.photo_mode.help` | Opens and closes with {btn:PHOTO}. Change the buttons under Controls. |
| `general.camera.horse_no_auto_recenter` | Horse camera: no auto-recenter |
| `general.camera.horse_no_auto_recenter.help` | On Epona, the camera stays where you point it. |
| `general.debug` | Debug |
| `general.debug.export_save` | Debug: Export current save |
| `general.debug.export_save.help` | Writes your current save game to a file that can be used as a Rush preset. |
| `general.debug.save_exported` | Save exported:  |
| `general.debug.save_export_failed` | The save could not be exported. |

</details>

<details><summary><code>qol</code> (41)</summary>

| Key | English |
| --- | --- |
| `qol.description` | Quality of life options. |
| `qol.warp_as_human` | Warp as human |
| `qol.warp_as_human.help` | Warp as human Link without turning into a wolf. |
| `qol.note_this_dusklight_build_lazy` | This Dusklight build (Lazy Tweaks) already has a 3-slot Z button. |
| `qol.note_twilight_hd_provides_the` | Twilight HD already provides a third item slot. Turn off its "Third Item Slot" setting and restart to use this one. |
| `qol.enable_third_item_slot` | Enable third item slot |
| `qol.enable_third_item_slot.help` | Adds a 3rd item slot on {btn:Z}. Midna moves to her own button (see Controls tab). |
| `qol.faster_call_cancel` | Faster call cancel |
| `qol.faster_call_cancel.help` | Lets you cancel Midna's call faster. |
| `qol.on_shallow_water` | On + shallow water |
| `qol.on_shallow_water_both_feet` | On + shallow water, both feet |
| `qol.auto_zora_armor` | Auto Zora Armor |
| `qol.auto_zora_armor.help` | **On**: puts on the **Zora Armor** in water and switches back on land.<br/>**On + shallow water**: also shows it under the water surface in shallow water.<br/>**On + shallow water, both feet**: the raised foot gets it at the same depth too. |
| `qol.improved_zora_swimming` | Improved Zora Swimming |
| `qol.improved_zora_swimming.help` | Smoother **Zora Armor** swimming: tap {btn:A} for a speed burst and roll, hold it to swim fast. |
| `qol.spin_attack_charge_levels` | Spin attack charge levels |
| `qol.spin_attack_charge_levels.help` | Hold the spin attack longer for up to three stronger levels with more reach. Drains stamina with **Stamina** on. |
| `qol.disable_hit_stun` | Disable hit stun |
| `qol.disable_hit_stun.help` | Removes the short freeze when you land a hit. |
| `qol.wooden_sword_damage` | Wooden Sword hits everything |
| `qol.wooden_sword_damage.help` | The **Wooden Sword** can hurt **Argorok**, **Zant**, **Puppet Zelda**, **Ganondorf** and **Dark Beast Ganon**. |
| `qol.switch_target_with_right_stick` | Switch target with right stick |
| `qol.switch_target_with_right_stick.help` | While locked on, flick the **right stick** towards another enemy to target it. |
| `qol.manual_jump` | Manual jump |
| `qol.manual_jump.help` | Jump from the ground with {btn:JUMP} (Controls tab) as human or wolf; the button loses its normal action. |
| `qol.disable_sword_flourish` | Disable sword flourish |
| `qol.disable_sword_flourish.help` | Link sheathes his sword without twirling it after a kill. |
| `qol.remove_enemy_combat_music` | Remove enemy combat music |
| `qol.remove_enemy_combat_music.help` | Enemies no longer trigger battle music. Boss music stays. |
| `qol.epona` | Epona |
| `qol.epona.enabled.help` | Enables the Epona tweaks below. |
| `qol.epona.turn_speed` | Turn speed |
| `qol.epona.turn_speed.help` | Steering sharpness. 100% is vanilla. |
| `qol.epona.top_speed` | Top speed |
| `qol.epona.top_speed.help` | Gallop top speed. 100% is vanilla. |
| `qol.epona.unlimited_spurs` | Unlimited spurs |
| `qol.epona.unlimited_spurs.help` | The whip pool stays at 6/6 while riding. |
| `qol.epona.always` | Always |
| `qol.epona.hold_sprint_button` | Hold sprint button |
| `qol.epona.auto_gallop` | Auto-gallop |
| `qol.epona.auto_gallop.help` | Epona gallops at full speed without spurs while you push the stick forward.<br/>**Always**: always full speed.<br/>**Hold sprint button**: only while you hold {btn:SPRINT}. |

</details>

<details><summary><code>combat</code> (39)</summary>

| Key | English |
| --- | --- |
| `combat.yes_forget_it` | Yes, forget it |
| `combat.forget_flurry_rush` | Forget Flurry Rush |
| `combat.forget_flurry_rush.help` | Reset the Flurry Rush hidden skill on this save? Save the game afterwards to keep it. |
| `combat.combat_tweaks_and_display_overlays` | Combat tweaks and display overlays. |
| `combat.enemy_hp_bars` | Enemy HP Bars |
| `combat.enemy_hp_bars.show_hp_bars` | Show HP bars |
| `combat.enemy_hp_bars.show_hp_bars.help` | Shows health bars above nearby enemies. |
| `combat.enemy_hp_bars.show_exact_hp_numbers` | Show exact HP numbers |
| `combat.enemy_hp_bars.show_exact_hp_numbers.help` | Shows current/max HP on enemy bars. |
| `combat.enemy_hp_bars.show_damage_numbers` | Show damage numbers |
| `combat.enemy_hp_bars.show_damage_numbers.help` | Shows damage numbers when enemies get hit. |
| `combat.enemy_hp_bars.show_boss_bars` | Show boss bars |
| `combat.enemy_hp_bars.show_boss_bars.help` | Shows a boss health bar at the top of the screen. |
| `combat.sword_combat` | Sword Combat |
| `combat.sheathed_spin` | Sheathed Spin |
| `combat.sheathed_spin.enabled.help` | Spin attack also works with the sword sheathed. |
| `combat.quick_draw` | Quick Draw |
| `combat.quick_draw.enabled.help` | Drawing the sword also performs a slash right away. |
| `combat.flurry_rush` | Flurry Rush |
| `combat.flurry_rush.enabled.help` | Dodge an attack at the last moment (side hop or backflip) to slow down time and strike rapidly. |
| `combat.flurry_rush.perfect_dodge_window` | Perfect dodge window |
| `combat.flurry_rush.perfect_dodge_window.help` | How many frames after a dodge count as perfect. Lower is harder. |
| `combat.flurry_rush.frames` |  frames |
| `combat.flurry_rush.learn_as_hidden_skill` | Learn as hidden skill |
| `combat.flurry_rush.always_available` | Always available |
| `combat.flurry_rush.unlock` | Unlock |
| `combat.flurry_rush.unlock.help` | **Always available**: usable right away.<br/>**Learn as hidden skill**: the Hero's Shade teaches it after the other seven hidden skills. |
| `combat.flurry_rush.forget_flurry_rush.help` | Resets the hidden skill on this save so you can learn it again. |
| `combat.flurry_rush.status.always_available` | Flurry Rush is always available. |
| `combat.flurry_rush.status.load_save` | Load a save file to see your progress. |
| `combat.flurry_rush.status.learned` | Learned: Flurry Rush is your eighth hidden skill. |
| `combat.flurry_rush.status.golden_wolf` | The golden wolf awaits you at the Temple of Time in the Sacred Grove. |
| `combat.flurry_rush.status.learn_seven_first` | Not learned yet. Learn all seven hidden skills from the Hero's Shade first. |
| `combat.flurry_rush.status.howling_stone` | Not learned yet. Somewhere in the Gerudo Desert, a howling stone sings a forgotten melody. |
| `combat.bullet_time.enabled.help` | Aim the bow mid-air to slow down time. Drains stamina and ends when you land, press {btn:A} or run out. |
| `combat.puppet_zelda` | Puppet Zelda |
| `combat.puppet_zelda.enabled.help` | Gives Puppet Zelda a fixed, learnable attack pattern. |
| `combat.puppet_zelda.always_shortest_attacks_sword_dive` | Always shortest attacks (Sword Dive only) |
| `combat.puppet_zelda.always_shortest_attacks_sword_dive.help` | Puppet Zelda only uses Sword Dive. |

</details>

<details><summary><code>stamina</code> (94)</summary>

| Key | English |
| --- | --- |
| `stamina_activities.sword_attacks` | Sword attacks |
| `stamina_activities.hidden_skills` | Hidden Skills |
| `stamina_activities.jump_spin_attacks` | Jump & spin attacks |
| `stamina_activities.rolls_side_hops_backflips` | Rolls, side hops & backflips |
| `stamina_activities.blocking_with_the_shield` | Blocking with the shield |
| `stamina_activities.climbing_walls` | Climbing walls |
| `stamina_activities.hanging_on_ledges` | Hanging on ledges |
| `stamina_activities.items` | Items |
| `stamina_activities.items.stamina_activities` | Stamina Activities |
| `stamina_activities.items.choose_which_activities_draw_from` | Which activities use stamina: |
| `stamina_costs.actions_cost_per_use` | Actions (cost per use) |
| `stamina_costs.actions_cost_per.sword_attack` | Sword attack |
| `stamina_costs.actions_cost_per.sword_attack.help` | Stamina per sword swing. |
| `stamina_costs.actions_cost_per.jump_attack` | Jump attack |
| `stamina_costs.actions_cost_per.jump_attack.help` | Stamina per jump attack. |
| `stamina_costs.actions_cost_per.hidden_skill` | Hidden skill |
| `stamina_costs.actions_cost_per.hidden_skill.help` | Stamina per hidden skill move. |
| `stamina_costs.actions_cost_per.spin_attack_extra` | Spin attack (extra) |
| `stamina_costs.actions_cost_per.spin_attack_extra.help` | Extra cost of a spin attack on top of a swing. |
| `stamina_costs.actions_cost_per.roll_backflip` | Roll / backflip |
| `stamina_costs.actions_cost_per.roll_backflip.help` | Stamina per roll and backflip. |
| `stamina_costs.actions_cost_per.side_hop` | Side hop |
| `stamina_costs.actions_cost_per.side_hop.help` | Stamina per side hop. |
| `stamina_costs.actions_cost_per.blocked_hit` | Blocked hit |
| `stamina_costs.actions_cost_per.blocked_hit.help` | Stamina per blocked hit. Blocking with an empty meter breaks Link's guard. |
| `stamina_costs.continuous_drain_per_frame_while` | Continuous (drain per frame while doing) |
| `stamina_costs.continuous_drain_per.bullet_time.help` | Drain during Bullet Time. At 100% a full meter lasts about 10 seconds. |
| `stamina_costs.continuous_drain_per.climbing` | Climbing |
| `stamina_costs.continuous_drain_per.climbing.help` | Drain while climbing. |
| `stamina_costs.continuous_drain_per.ledge_hang_shimmy` | Ledge hang & shimmy |
| `stamina_costs.continuous_drain_per.ledge_hang_shimmy.help` | Drain while hanging on ledges. |
| `stamina_costs.continuous_drain_per.crawling` | Crawling |
| `stamina_costs.continuous_drain_per.crawling.help` | Drain while crawling. |
| `stamina_costs.continuous_drain_per.swimming.help` | Drain while swimming and diving. Floating and the Zora Armor are free. |
| `stamina_costs.continuous_drain_per.pushing_pulling.help` | Drain while pushing or pulling. |
| `stamina_costs.continuous_drain_per.wolf_dash_vanilla` | Wolf dash (vanilla) |
| `stamina_costs.continuous_drain_per.wolf_dash_vanilla.help` | Drain of the wolf dash. |
| `stamina_costs.continuous_drain_per.human_sprint` | Human sprint |
| `stamina_costs.continuous_drain_per.human_sprint.help` | Drain while sprinting. |
| `stamina_costs.continuous_drain_per.wolf_sprint.help` | Drain while sprinting as a wolf. |
| `stamina_costs.continuous_drain_per.swim_sprint` | Swim sprint |
| `stamina_costs.continuous_drain_per.swim_sprint.help` | Drain while swim sprinting. |
| `stamina_costs.continuous_drain_per.spin_attack_charge` | Spin attack charge |
| `stamina_costs.continuous_drain_per.spin_attack_charge.help` | Drain while charging a spin attack. Running out cancels it. |
| `stamina_costs.items_drain_per_frame_while` | Items (drain per frame while aiming) |
| `stamina_costs.items_drain_per.slingshot_aiming.help` | Drain while drawing the slingshot. |
| `stamina_costs.items_drain_per.bow_aiming.help` | Drain while drawing the bow. |
| `stamina_costs.items_drain_per.ball_and_chain_aiming.help` | Drain while swinging the Ball and Chain. |
| `stamina_costs.items_drain_per.stamina_costs` | Stamina Costs |
| `stamina_costs.items_drain_per.every_cost_as_a_percentage` | All costs in percent of their default. |
| `stamina.description` | Stamina meter, activities, costs and sprinting. |
| `stamina.enabled.help` | Adds a stamina meter for attacks, sprint, climbing, and swimming. |
| `stamina.choose_stamina_activities` | Choose Stamina Activities... |
| `stamina.choose_stamina_activities.help` | Choose which actions consume stamina. |
| `stamina.set_stamina_costs` | Set Stamina Costs... |
| `stamina.set_stamina_costs.help` | Set each action's stamina cost in percent. |
| `stamina.meter_refill` | Meter & Refill |
| `stamina.meter_refill.scale_max_stamina_with_max` | Scale max stamina with max hearts |
| `stamina.meter_refill.scale_max_stamina_with_max.help` | Max stamina grows with your hearts: 100 at 3 hearts, plus the amount below per extra heart. |
| `stamina.meter_refill.stamina_per_extra_heart` | Stamina per extra heart |
| `stamina.meter_refill.stamina_per_extra_heart.help` | Max stamina per heart past 3. |
| `stamina.meter_refill.max_stamina` | Max stamina |
| `stamina.meter_refill.max_stamina.help` | Maximum stamina. |
| `stamina.meter_refill.refill_speed` | Refill speed |
| `stamina.meter_refill.refill_speed.help` | Stamina refill speed. |
| `stamina.meter_refill.refill_delay` | Refill delay |
| `stamina.meter_refill.refill_delay.help` | Seconds before stamina starts to refill. |
| `stamina.meter_refill.exhaustion_recovery` | Exhaustion recovery |
| `stamina.meter_refill.exhaustion_recovery.help` | When stamina runs out, Link can't attack, roll or sprint until it refills to this percentage. |
| `stamina.meter_refill.restore_stamina_on_stage_change` | Restore stamina on stage change |
| `stamina.meter_refill.restore_stamina_on_stage_change.help` | Refills stamina when you change areas or warp. |
| `stamina.climbing_swimming` | Climbing & Swimming |
| `stamina.climbing_swimming.slow_regen_while_hanging` | Slow regen while hanging |
| `stamina.climbing_swimming.slow_regen_while_hanging.help` | Stamina slowly refills while hanging still on ivy or ledges. |
| `stamina.climbing_swimming.slow_regen_while_floating` | Slow regen while floating |
| `stamina.climbing_swimming.slow_regen_while_floating.help` | Stamina slowly refills while floating still in water. |
| `stamina.climbing_swimming.drown_when_out_of_stamina` | Drown when out of stamina |
| `stamina.climbing_swimming.drown_when_out_of_stamina.help` | Running out of stamina while swimming makes Link drown and lose a heart. Not with the Zora Armor. |
| `stamina.sprint.sprint_hold_roll_button` | Sprint (hold roll button) |
| `stamina.sprint.sprint_hold_roll_button.help` | Hold {btn:SPRINT} while running to sprint. |
| `stamina.sprint.sprint_speed` | Sprint speed |
| `stamina.sprint.sprint_speed.help` | How fast Link runs while sprinting, in percent of his normal running speed. With **Drain more based on sprint speed** on, higher values also use more stamina. |
| `stamina.sprint.sprint_start_roll` | Sprint start roll |
| `stamina.sprint.sprint_start_roll.help` | Roll once when starting a sprint. |
| `stamina.sprint.wolf_sprint_hold_roll_button` | Wolf sprint (hold roll button) |
| `stamina.sprint.wolf_sprint_hold_roll_button.help` | Hold {btn:SPRINT} as a wolf to sprint. |
| `stamina.sprint.wolf_sprint_speed` | Wolf sprint speed |
| `stamina.sprint.wolf_sprint_speed.help` | How fast Wolf Link runs while sprinting, in percent of his normal running speed. |
| `stamina.sprint.swim_sprint_hold_roll_button` | Swim sprint (hold roll button) |
| `stamina.sprint.swim_sprint_hold_roll_button.help` | Hold {btn:SPRINT} while swimming to sprint. Not with the Zora Armor. |
| `stamina.sprint.swim_sprint_speed` | Swim sprint speed |
| `stamina.sprint.swim_sprint_speed.help` | How fast Link swims while sprinting, in percent of his normal swimming speed. Also applies to Wolf Link. |
| `stamina.sprint.drain_more_based_on_sprint` | Drain more based on sprint speed |
| `stamina.sprint.drain_more_based_on_sprint.help` | Faster sprinting uses more stamina, slower uses less. |

</details>

<details><summary><code>visuals</code> (27)</summary>

| Key | English |
| --- | --- |
| `visible_equipment_dialog.heros_bow` | Hero's Bow |
| `visible_equipment_dialog.lantern_belt` | Lantern |
| `visible_equipment_dialog.bottles_belt` | Bottles |
| `visible_equipment_dialog.dungeon_keys_key_ring` | Dungeon Keys |
| `visible_equipment_dialog.horse_call_necklace` | Horse Call |
| `visible_equipment_dialog.select_which_items_to_display` | Items shown on Link: |
| `visuals.description` | Visual customization options. |
| `visuals.visual_equipment.enabled.help` | Shows your bow, quiver, lantern, bottles, keys and horse call on Link. |
| `visuals.visual_equipment.choose_visible_items` | Choose Visible Items... |
| `visuals.visual_equipment.choose_visible_items.help` | Select which items are displayed on Link. |
| `visuals.visual_equipment.mirror_bow_angle` | Mirror bow angle |
| `visuals.visual_equipment.mirror_bow_angle.help` | Moves the bow to Link's other shoulder. |
| `visuals.visual_equipment.quiver_on_left_belt` | Quiver on left belt |
| `visuals.visual_equipment.quiver_on_left_belt.help` | Moves the quiver from the back to the left hip. |
| `visuals.visual_equipment.dynamic_quiver_arrows` | Dynamic quiver arrows |
| `visuals.visual_equipment.dynamic_quiver_arrows.help` | The quiver shows as many arrows as you have, and they sway as you move. |
| `visuals.visual_equipment.on_other_players` | On other players |
| `visuals.visual_equipment.on_other_players.help` | Shows your gear on other players in Crests of Courage. |
| `visuals.visual_equipment.default_by_arrow_capacity` | Default (by arrow capacity) |
| `visuals.visual_equipment.big_quiver` | Big Quiver |
| `visuals.visual_equipment.giant_quiver` | Giant Quiver |
| `visuals.visual_equipment.quiver_model` | Quiver model |
| `visuals.visual_equipment.quiver_model.help` | Which quiver Link wears. **Default** matches your arrow capacity. |
| `visuals.visual_equipment.two_larger` | Two (larger) |
| `visuals.visual_equipment.all_up_to_4` | All (up to 4) |
| `visuals.visual_equipment.bottles_on_belt` | Bottles on belt |
| `visuals.visual_equipment.bottles_on_belt.help` | **Two (larger)**: two bigger bottles, filled ones first.<br/>**All (up to 4)**: every bottle. |

</details>

<details><summary><code>quick_access</code> (10)</summary>

| Key | English |
| --- | --- |
| `quick_access.description` | Quick item access and input modifications. |
| `quick_access.quick_access.enabled.help` | Tap {btn:QA} to use its item, hold it to open the menu. Change the button in the Controls tab, the look in the Customization tab. |
| `quick_access.quick_access.items_except_bottles` | Items except bottles |
| `quick_access.quick_access.items_including_bottles` | Items including bottles |
| `quick_access.quick_access.hide_items_from_item_wheel` | Hide items from item wheel |
| `quick_access.quick_access.hide_items_from_item_wheel.help` | Hides quick items from the item wheel.<br/>**Off**: nothing hidden.<br/>**Items except bottles**: bottles stay in the wheel.<br/>**Items including bottles**: bottles only on the Quick Access bottle page ({btn:LB}).<br/>Items on {btn:X} or {btn:Y} always stay visible. |
| `quick_access.pages.bottles` | Bottles |
| `quick_access.pages.tunics` | Tunics |
| `quick_access.hints.customize` | Customize |
| `quick_access.hints.customize_fallback` | X Customize |

</details>

<details><summary><code>talents</code> (3)</summary>

| Key | English |
| --- | --- |
| `menus.talent_tree` | Talent Tree |
| `menus.talent_tree.enable_talents` | Enable Talents |
| `menus.talent_tree.enable_talents.help` | Adds a talent tree to the Collection screen (press {btn:Y} there). Every heart gives 2 talent points. Switch branches with {btn:L} / {btn:R}, reset for free with {btn:X}. Saved per file, no effect in the Boss Rush. |

</details>

<details><summary><code>boss_rush</code> (217)</summary>

| Key | English |
| --- | --- |
| `boss_rush.yes_clear` | Yes, clear |
| `boss_rush.clear_best_times` | Clear Best Times |
| `boss_rush.clear_best_times.help` | Are you sure you want to clear all Boss Rush best times? |
| `boss_rush.game_code` | Game code  |
| `boss_rush.copied_to_clipboard` |  copied to clipboard. |
| `boss_rush.yes_reset` | Yes, reset |
| `boss_rush.reset_item_layouts` | Reset Item Layouts |
| `boss_rush.reset_item_layouts.help` | Reset the items and tunics of all boss statues to the suggested ones? |
| `boss_rush.fight_any_boss_on_demand_warning` | Fight any boss. Contains spoilers for the whole game. |
| `boss_rush.start_boss_rush` | Start Boss Rush |
| `boss_rush.start_boss_rush.help` | Warps you to the Boss Rush chamber. |
| `boss_rush.normal` | Normal |
| `boss_rush.glitchless` | Glitchless |
| `boss_rush.glitched` | Glitched |
| `boss_rush.practice` | Practice |
| `boss_rush.mode` | Mode |
| `boss_rush.mode.help` | Locked during fights.<br/>**Normal**: everything allowed, times stay local.<br/>**Glitchless**: only the gear Link normally has at each boss.<br/>**Glitched**: all items.\n\nGlitchless and Glitched have their own leaderboards. They turn off all Twilit Essentials features and Dusklight cheats and need other mods disabled. |
| `boss_rush.mode.help_practice` | Locked during fights.<br/>**Normal**: everything allowed, times stay local.<br/>**Glitchless**: only the gear Link normally has at each boss.<br/>**Glitched**: all items.<br/>**Practice**: Glitched rules with practice tools, nothing is saved.\n\nGlitchless and Glitched have their own leaderboards. They turn off all Twilit Essentials features and Dusklight cheats and need other mods disabled. |
| `boss_rush.reset_item_layouts_2` | Reset item layouts |
| `boss_rush.reset_item_layouts.help_2` | Each boss statue stores its own {btn:X} and {btn:Y} items and tunic, set with the item wheel in front of it. This resets them to the suggested items. |
| `boss_rush.watch_replay` | Watch replay... |
| `boss_rush.watch_replay.help` | Watch a recorded fight (.terp). Only in the Boss Rush chamber.\n\n{btn:A} pause, {btn:DPAD_LEFT_RIGHT} -1s/+1s, {btn:X} speed, {btn:B} exit. |
| `boss_rush.all_fights` | All fights |
| `boss_rush.personal_bests_only` | Personal bests only |
| `boss_rush.save_replays` | Save replays |
| `boss_rush.save_replays.help` | **All fights**: the 50 newest.<br/>**Personal bests only**: only new best times.<br/>**Off**: none. |
| `boss_rush.game_code_2` | Game code:  |
| `boss_rush.enter_this_code_next_to_show` | Enter this code next to **Show in game** on the website to start replays here. |
| `boss_rush.replay_tutorial` | Replay tutorial |
| `boss_rush.replay_tutorial.help` | Midna explains the Boss Rush again in the chamber. |
| `boss_rush.clear_best_timers` | Clear best timers |
| `boss_rush.clear_best_timers.help` | Resets all Boss Rush best times. |
| `boss_rush.separate_ganon_fights` | Separate Ganon fights |
| `boss_rush.separate_ganon_fights.help` | Fights all 4 Ganon phases in sequence instead of separate statues. |
| `boss_rush.enable_dark_link` | Enable Dark Link |
| `boss_rush.enable_dark_link.help` | Adds a Dark Link statue (needs the Dark Link mod). |
| `boss_rush.show_boss_rush_portal` | Show boss rush portal |
| `boss_rush.show_boss_rush_portal.help` | Shows the portal on the map. |
| `boss_rush.replays` | Replays |
| `boss_rush.master_rush` | Master Rush |
| `boss_rush.master_rush.at_beginning` | At beginning |
| `boss_rush.master_rush.current_boss` | Current boss |
| `boss_rush.master_rush.retry` | Retry |
| `boss_rush.master_rush.retry.help` | **At beginning**: restarts the whole run.<br/>**Current boss**: restarts only this fight. Normal mode only. |
| `boss_rush.master_rush.retry.help_practice` | **At beginning**: restarts the whole run.<br/>**Current boss**: restarts only this fight. Normal and Practice mode only. |
| `boss_rush.master_rush.normal_20_hearts` | Normal (20 hearts) |
| `boss_rush.master_rush.hard_3_hearts` | Hard (3 hearts) |
| `boss_rush.master_rush.difficulty` | Difficulty |
| `boss_rush.master_rush.difficulty.help` | Hearts you have for the whole Master Rush. |
| `boss_rush.practice.infinite_items` | Infinite items |
| `boss_rush.practice.infinite_items.help` | Only in Practice mode: arrows, bombs, slingshot seeds and lantern oil are refilled during a fight, and so are rupees while you wear the Magic Armor.\n\nStanding in front of the Diababa, Morpheel, Stallord, Blizzeta, Argorok or Zant statue, {btn:DPAD_LEFT_RIGHT} picks the phase the fight starts in. At the Master Sword it picks the boss the Master Rush starts at. |
| `boss_rush.practice.infinite_hearts` | Infinite hearts |
| `boss_rush.practice.infinite_hearts.help` | Only in Practice mode: your hearts are refilled after every hit during a fight. |
| `boss_rush.online_leaderboard` | Online Leaderboard |
| `boss_rush.online_leaderboard.online_leaderboard` | Online leaderboard |
| `boss_rush.online_leaderboard.online_leaderboard.help` | Uploads your times to te.fimmel.dev. Call Midna in the chamber to see the Top 10.\n\nOnly your name, times and an anonymous ID are sent. Needs Glitchless or Glitched mode. |
| `boss_rush.online_leaderboard.player_name` | Player name |
| `boss_rush.online_leaderboard.player_name.help` | 3-16 letters, digits, spaces or _ . - |
| `boss_rush.leaderboard_status.no_networking` | Networking is unavailable in this Dusklight build. |
| `boss_rush.leaderboard_status.off` | Online leaderboard is off. |
| `boss_rush.leaderboard_status.need_name` | Enter a player name to join the leaderboard. |
| `boss_rush.leaderboard_status.invalid_name` | This name is not allowed. Use 3-16 letters, digits, spaces or _ . - |
| `boss_rush.leaderboard_status.connecting` | Connecting... |
| `boss_rush.leaderboard_status.name_taken` | "%s" is already taken. Choose another name, or use Discord account to sign in as your player from another device. |
| `boss_rush.leaderboard_status.banned` | This player was removed from the leaderboard. |
| `boss_rush.leaderboard_status.outdated_version` | This mod version can no longer upload times. Update Twilit Essentials to %s to use the leaderboard. |
| `boss_rush.leaderboard_status.outdated` | This mod version can no longer upload times. Update Twilit Essentials to use the leaderboard. |
| `boss_rush.leaderboard_status.unofficial` | Online uploads are only available in official Twilit Essentials releases. |
| `boss_rush.leaderboard_status.maintenance_paused` | Leaderboard maintenance - uploads are paused, the game checks again automatically. |
| `boss_rush.leaderboard_status.busy` | Leaderboard server is busy, trying again in a few minutes. |
| `boss_rush.leaderboard_status.unreachable` | Leaderboard server not reachable, retrying... |
| `boss_rush.leaderboard_status.playing_as` | Playing as %s. |
| `boss_rush.leaderboard_status.not_ranked_mode` | %s mode: times are not uploaded. Choose Glitchless or Glitched to rank online. |
| `boss_rush.leaderboard_status.blocked` | %s blocked - %s. |
| `boss_rush.leaderboard_status.uploading` | %s: your Boss Rush runs are uploaded to the %s leaderboard. |
| `boss_rush.leaderboard_status.maintenance_running` | Leaderboard maintenance - finished runs are uploaded when it ends, runs started now are not. |
| `boss_rush.leaderboard_status.maintenance_in_1` | Leaderboard maintenance in 1 minute |
| `boss_rush.leaderboard_status.maintenance_in` | Leaderboard maintenance in %s minutes |
| `boss_rush.leaderboard_status.maintenance_soon` | Runs you start after that are not ranked. |
| `boss_rush.online` | Online |
| `boss_rush.online.allow_online` | Allow online |
| `boss_rush.online.allow_online.help` | Play with others in the chamber (needs Online leaderboard and a player name). Times set while you are in a party are not uploaded. |
| `boss_rush.online.leave_party` | Leave party |
| `boss_rush.online.leave_party.help` | Leaves your current party. |
| `boss_rush.online.rejoin_fight` | Rejoin party fight |
| `boss_rush.online.rejoin_fight.help` | Joins the fight your party is in and places you next to the host. |
| `boss_rush.online.party` | Party |
| `boss_rush.online.duel` | Duel |
| `boss_rush.online.teleport_to_host` | Teleport to host |
| `boss_rush.online.teleport_to_host.help` | Takes you to the host's floor and places you right next to the host. |
| `dungeon_rush.description` | Play every dungeon from its entrance. Contains spoilers for the whole game. |
| `dungeon_rush.map_label` | MAP |
| `boss_rush.tutorial.1` | Welcome to the *Boss Rush*!\nLet me fill you in on how things\nwork around here. |
| `boss_rush.tutorial.2` | Every *statue* in this hall is a boss\nyou have already beaten. Walk up to\none and press {A} to fight it again. |
| `boss_rush.tutorial.3` | While you stand at a statue, set up\nyour items in the *item wheel*. I'll\nremember that loadout for the boss. |
| `boss_rush.tutorial.4` | To clear a button, open the wheel and\npress {X} or {Y} on the item that is\nalready on it. |
| `boss_rush.tutorial.5` | *Zant* fights through six phases. At\nhis statue, use {DPAD} *Left/Right* to\npick a phase and set its items. |
| `boss_rush.tutorial.6` | The *Master Sword* starts the\n*Master Rush*: every boss back to\nback, timed as one run. |
| `boss_rush.tutorial.7` | Call me any time to *change the mode*,\nopen the *leaderboard* or leave the\nBoss Rush. |
| `boss_rush.tutorial.8` | *Normal* mode allows everything,\nbut your times are not uploaded. |
| `boss_rush.tutorial.9` | *Glitchless* and *Glitched* turn off\ncheats, other mods and extra\nfeatures, so every run is fair. |
| `boss_rush.tutorial.10` | *Glitchless* keeps you to vanilla\ngear. *Glitched* lets you use\nevery item you have. |
| `boss_rush.tutorial.11` | To upload your times, turn on the\n*online leaderboard* in the Boss Rush\nsettings. |
| `boss_rush.tutorial.12` | Turn it on *before* you fight. Runs\nyou did while it was off can't be\nuploaded, you'd have to redo them. |
| `boss_rush.tutorial.13` | During a fight, call me to head back\nhere. Good luck, Link! |
| `dungeon_rush.tutorial.1` | Welcome to the *Dungeon Rush*!\nLet me show you how this place\nworks. |
| `dungeon_rush.tutorial.2` | Each *door* leads to a dungeon.\nWalk through one to start a run\nat that dungeon's entrance. |
| `dungeon_rush.tutorial.3` | A run is always the *whole dungeon*.\nThe timer stops when the boss\nfalls. |
| `dungeon_rush.tutorial.4` | In front of a door, set up your\nitems in the *item wheel*. I'll\nremember them for that dungeon. |
| `dungeon_rush.tutorial.5` | Press {B} at a door to see its\n*splits*: personal best, best\nsegments and Sum of Best. |
| `dungeon_rush.tutorial.6` | During a run, the *split list*\ncompares you to your best. You\ncan move or hide it in the settings. |
| `dungeon_rush.tutorial.7` | Call me any time to *change the\nmode*, open the *leaderboard* or\nleave the Dungeon Rush. |
| `dungeon_rush.tutorial.8` | *Normal* allows everything.\n*Glitchless* gives you only the gear\nLink has when entering a dungeon. |
| `dungeon_rush.tutorial.9` | *Glitched* unlocks every item.\nBoth turn off cheats and other\nmods, so every run is fair. |
| `dungeon_rush.tutorial.10` | Inside a dungeon, call me to head\nback here, or press the *retry\nbutton* to restart. Good luck! |
| `dungeon_rush.replay_tutorial.help` | Midna explains the Dungeon Rush again in the hub. |
| `dungeon_rush.clear_splits` | Clear All Splits |
| `dungeon_rush.clear_splits.help` | Deletes all saved split times and best segments. |
| `dungeon_rush.clear_splits.confirm` | Delete all saved split times and best segments of every dungeon? |
| `dungeon_rush.yes_clear` | Yes, clear |
| `dungeon_rush.splits_section` | Splits |
| `dungeon_rush.splits_scale` | Splits Size |
| `dungeon_rush.splits_scale.help` | How big the split list is. |
| `dungeon_rush.show_splits` | Show Splits |
| `dungeon_rush.show_splits.help` | Shows a split list like LiveSplit during a Dungeon Rush run. |
| `dungeon_rush.splits_x` | Splits X Offset |
| `dungeon_rush.splits_x.help` | Moves the split list left or right. |
| `dungeon_rush.splits_y` | Splits Y Offset |
| `dungeon_rush.splits_y.help` | Moves the split list up or down. |
| `dungeon_rush.splits_opacity` | Splits Opacity |
| `dungeon_rush.splits_opacity.help` | How visible the split list is. |
| `dungeon_rush.mode.help` | Locked inside a dungeon.<br/>**Normal**: everything allowed, all items.<br/>**Glitchless**: only the gear and hearts Link normally has when entering each dungeon.<br/>**Glitched**: all items.\n\nGlitchless and Glitched turn off all Twilit Essentials features and Dusklight cheats except Quick transform. The mode is shared with Boss Rush. |
| `dungeon_rush.reset_item_layouts.help` | Clears the items saved for each door and statue. |
| `dungeon_rush.controls` | Controls |
| `dungeon_rush.retry_button.help` | Button that restarts the current dungeon from its entrance. |
| `dungeon_rush.presets.description` | Choose, edit and share the splits of a dungeon. |
| `dungeon_rush.presets.default_name` | Default |
| `dungeon_rush.presets.my_splits` | My Splits |
| `dungeon_rush.presets.shared` | shared |
| `dungeon_rush.presets.new` | New Preset |
| `dungeon_rush.presets.new.help` | Copies the selected preset so you can edit it. |
| `dungeon_rush.presets.name` | Name |
| `dungeon_rush.presets.name.help` | Renames the selected preset. |
| `dungeon_rush.presets.delete` | Delete Preset |
| `dungeon_rush.presets.delete.help` | Deletes the selected preset and its split times. |
| `dungeon_rush.presets.delete.confirm` | Delete this preset and all of its split times? |
| `dungeon_rush.presets.share` | Share Online |
| `dungeon_rush.presets.share.help` | Uploads your preset to the website so others can download it. |
| `dungeon_rush.presets.unshare` | Remove From Website |
| `dungeon_rush.presets.unshare.help` | Takes your shared preset off the website. |
| `dungeon_rush.presets.edit_section` | Edit Splits |
| `dungeon_rush.presets.default_locked` | The default preset can't be changed. Press New Preset to edit a copy. |
| `dungeon_rush.presets.run_locked` | Splits can't be changed during a run. |
| `dungeon_rush.presets.dungeon` | Dungeon |
| `dungeon_rush.presets.dungeon.help` | Choose the dungeon whose splits you edit. |
| `dungeon_rush.presets.move_up` | Move Up |
| `dungeon_rush.presets.move_up.help` | Moves the selected split one place earlier. |
| `dungeon_rush.presets.move_down` | Move Down |
| `dungeon_rush.presets.move_down.help` | Moves the selected split one place later. |
| `dungeon_rush.presets.remove` | Remove Split |
| `dungeon_rush.presets.remove.help` | Removes the selected split from this dungeon. |
| `dungeon_rush.presets.split_name` | Split Name |
| `dungeon_rush.presets.split_name.help` | Renames the selected split. Leave it empty to use the flag's name. |
| `dungeon_rush.presets.add_section` | Add Split |
| `dungeon_rush.presets.search` | Search |
| `dungeon_rush.presets.search.help` | Filters the flags below; press one to add it after the selected split. |
| `dungeon_rush.presets.story_flags` | Show Story Flags |
| `dungeon_rush.presets.story_flags.help` | Also lists story flags from outside this dungeon. |
| `dungeon_rush.presets.online_section` | Online Presets |
| `dungeon_rush.presets.refresh` | Refresh |
| `dungeon_rush.presets.refresh.help` | Loads the presets shared on the website; press one to download it. |
| `dungeon_rush.presets.loading` | Loading… |
| `dungeon_rush.presets.offline` | The website could not be reached. |
| `dungeon_rush.presets.empty` | No presets have been shared yet. |
| `dungeon_rush.presets.count` | Shared presets: |
| `dungeon_rush.presets.downloaded` | Preset downloaded and selected. |
| `dungeon_rush.presets.download_failed` | The preset could not be downloaded. |
| `dungeon_rush.presets.uploaded` | Preset shared on the website. |
| `dungeon_rush.presets.upload_failed` | Sharing failed. Try again later. |
| `dungeon_rush.presets.not_registered` | Set a leaderboard name in the Boss Rush settings first. |
| `dungeon_rush.presets.rate_limited` | Too many uploads. Try again later. |
| `dungeon_rush.presets.unshared` | Preset removed from the website. |
| `dungeon_rush.presets.duplicate` | This split is already in the list. |
| `dungeon_rush.presets.full` | This dungeon already has the most splits allowed. |
| `dungeon_rush.presets.kind.chest` | [Chest] |
| `dungeon_rush.presets.kind.switch` | [Flag] |
| `dungeon_rush.presets.kind.item` | [Item] |
| `dungeon_rush.presets.kind.story` | [Story] |
| `dungeon_rush.presets.kind.default` | [Default] |
| `dungeon_rush.customize.loadout_tab` | Loadout |
| `dungeon_rush.customize.description` | These settings only apply to this dungeon. |
| `dungeon_rush.customize.skills_section` | Hidden Skills |
| `dungeon_rush.customize.skill.ending_blow` | Ending Blow |
| `dungeon_rush.customize.skill.shield_attack` | Shield Attack |
| `dungeon_rush.customize.skill.back_slice` | Back Slice |
| `dungeon_rush.customize.skill.helm_splitter` | Helm Splitter |
| `dungeon_rush.customize.skill.mortal_draw` | Mortal Draw |
| `dungeon_rush.customize.skill.jump_strike` | Jump Strike |
| `dungeon_rush.customize.skill.great_spin` | Great Spin |
| `dungeon_rush.customize.skill.help` | Turn this hidden skill off for runs of this dungeon. |
| `dungeon_rush.customize.rupees_section` | Rupees |
| `dungeon_rush.customize.custom_rupees` | Set Rupees |
| `dungeon_rush.customize.custom_rupees.help` | Starts the dungeon with the rupee count below instead of the save file's. |
| `dungeon_rush.customize.rupees` | Rupee Count |
| `dungeon_rush.customize.rupees.help` | Left and right change it by 10, press A to type an exact number. |
| `dungeon_rush.customize.form_section` | Starting Form |
| `dungeon_rush.customize.form` | Form |
| `dungeon_rush.customize.form.help` | Choose whether you enter the dungeon as Link or as the wolf. |
| `dungeon_rush.customize.form.locked` | In this mode the wolf form unlocks in a later dungeon. |
| `dungeon_rush.customize.human` | Link |
| `dungeon_rush.customize.wolf` | Wolf |
| `dungeon_rush.presets.current_section` | Current Preset |
| `dungeon_rush.presets.switch_hint` | Switch presets at the dungeon's door with {btn:DPAD_LEFT_RIGHT}. |
| `dungeon_rush.presets.pick_hint` | Drag a split to move it. Press the selected split again to rename it. |
| `dungeon_rush.presets.rename` | Rename |
| `dungeon_rush.presets.rename.help` | Leave the name empty to use the flag's name. |
| `dungeon_rush.presets.preset` | Preset |

</details>

<details><summary><code>controls</code> (33)</summary>

| Key | English |
| --- | --- |
| `controls.description` | Action button: talk, roll, open doors, pick up and more. |
| `controls.sword_attacks_and_the_swords_skills` | Sword attacks and the sword's skills. |
| `controls.uses_the_item_set_to_x` | Uses the {btn:X} item. Sets the {btn:X} item in the item wheel. |
| `controls.uses_the_item_set_to_y` | Uses the {btn:Y} item. Sets the {btn:Y} item in the item wheel. |
| `controls.face_buttons` | Face Buttons |
| `controls.face_buttons.custom_face_buttons` | Custom Face Buttons |
| `controls.face_buttons.custom_face_buttons.help` | Puts Action ({btn:A}), Sword ({btn:B}) and the {btn:X} and {btn:Y} items on any face button. Picking a taken button swaps the two.<br/>Applies to gameplay and the item wheel. Menus, conversations and cutscenes keep the normal buttons.<br/>The HD layout shows your buttons in the HUD and in button prompts. Not used with touch controls. |
| `controls.face_buttons.swap_everywhere` | Swap Everywhere |
| `controls.face_buttons.swap_everywhere.help` | Also uses your buttons in menus, conversations and cutscenes. |
| `controls.face_buttons.remap_the_controller_buttons_of_the` | Remap the buttons of the mod's features. Bindings of disabled features are grayed out. |
| `controls.face_buttons.note_twilight_hds_d_pad` | Twilight HD uses the D-Pad for shortcuts. With Quick Access on: {btn:DPAD_RIGHT} toggles the minimap, {btn:DPAD_LEFT} opens Collection/Save, {btn:DPAD_DOWN} is Quick Access, {btn:DPAD_UP} stays Twilight HD's map. |
| `controls.midna` | Midna |
| `controls.midna.midna_button` | Midna button |
| `controls.midna.midna_button.help` | Button that calls Midna while the Z-Button is enabled.<br/>{btn:LB}: Midna shows top left, {btn:DPAD_LEFT} toggles the minimap.<br/>{btn:DPAD_LEFT}: calls Midna from the D-Pad.<br/>{btn:R} + {btn:DPAD_RIGHT} toggles the minimap in both modes. |
| `controls.boss_rush` | Boss Rush |
| `controls.boss_rush.retry_button` | Retry button |
| `controls.boss_rush.retry_button.help` | Button that restarts the current Boss Rush fight.<br/>The {btn:L} + variants only work while {btn:L} is held, so you can't restart by accident. |
| `controls.quick_access.quick_access_button` | Quick Access button |
| `controls.quick_access.quick_access_button.help` | Tap to use your quick item, hold to open Quick Access. {btn:LS\|L3}/{btn:C\|R3} are the stick clicks, {btn:L\|L2}/{btn:R\|R2} the triggers. |
| `controls.stamina` | Stamina |
| `controls.stamina.sprint_button` | Sprint button |
| `controls.stamina.sprint_button.help` | Button for sprinting on foot, as a wolf, while swimming and for Epona's auto-gallop. {btn:LS\|L3}/{btn:C\|R3} are the stick clicks, {btn:L\|L2}/{btn:R\|R2} the triggers. |
| `controls.stamina.sprint_mode` | Sprint mode |
| `controls.stamina.sprint_mode.help` | **Hold**: sprint while held.<br/>**Toggle**: tap to sprint. Stops when you release the stick, tap again or run out of stamina. |
| `controls.jump` | Jump |
| `controls.jump.jump_button` | Jump button |
| `controls.jump.jump_button.help` | Button for **Manual jump**. {btn:LS\|L3}/{btn:C\|R3} are the stick clicks, {btn:L\|L2}/{btn:R\|R2} the triggers. |
| `controls.photo_mode` | Photo Mode |
| `controls.photo_mode.hold_button` | Hold button |
| `controls.photo_mode.hold_button.help` | Button held while pressing the photo mode button. **None**: the photo mode button works alone. |
| `controls.photo_mode.press_button` | Photo mode button |
| `controls.photo_mode.press_button.help` | Opens and closes the photo mode. {btn:LS\|L3}/{btn:C\|R3} are the stick clicks, {btn:L\|L2}/{btn:R\|R2} the triggers. |
| `controls.photo_mode.no_hold_button` | None |

</details>

<details><summary><code>customization</code> (62)</summary>

| Key | English |
| --- | --- |
| `customization.description` | Customize the look of the bars and menus. |
| `customization.stamina_bar` | Stamina Bar |
| `customization.stamina_bar.style` | Style |
| `customization.stamina_bar.style.help` | **Default**: Twilight Princess style bar in the HUD.<br/>**BotW Wheel**: stamina wheel next to Link, extra stamina as outer rings. |
| `customization.stamina_bar.x_offset` | X Offset |
| `customization.stamina_bar.x_offset.help` | Moves the stamina bar horizontally. |
| `customization.stamina_bar.y_offset` | Y Offset |
| `customization.stamina_bar.y_offset.help` | Moves the stamina bar vertically. |
| `customization.oxygen_meter` | Oxygen Meter |
| `customization.oxygen_meter.style.help` | **Default**: air meter under the hearts.<br/>**BotW Wheel**: small air wheel below the stamina wheel. |
| `customization.oxygen_meter.x_offset.help` | Moves the air wheel horizontally. |
| `customization.oxygen_meter.y_offset.help` | Moves the air wheel vertically. |
| `customization.button_hud` | Button HUD |
| `customization.button_hud.layout` | Layout |
| `customization.button_hud.gamecube` | GameCube |
| `customization.button_hud.hd` | HD |
| `customization.button_hud.xbox` | Xbox |
| `customization.button_hud.playstation` | PlayStation |
| `customization.button_hud.nintendo_switch` | Nintendo Switch |
| `customization.button_hud.layout.help` | **GameCube**: original button cluster.<br/>**HD**: {btn:A}, {btn:B}, {btn:X} and {btn:Y} in a diamond like on a controller. All button prompts show the chosen controller symbols. |
| `customization.button_hud.button_icons` | Button Icons |
| `customization.button_hud.button_icons.help` | Which controller symbols the HD layout shows in the HUD and in button prompts. |
| `customization.button_hud.mirror_sword_slot` | Mirror sword slot |
| `customization.button_hud.mirror_sword_slot_buttons` | Mirror sword slot + buttons |
| `customization.button_hud.mirror_sword_slot_2` | Mirror Sword Slot |
| `customization.button_hud.mirror_sword_slot.help` | Swaps the sword and X item icons in the HD layout. Controls stay the same.<br/>**Mirror sword slot**: for controllers with B and X swapped, prompts swap B and X too.<br/>**Mirror sword slot + buttons**: only moves the icons.<br/>Not used with **Custom Face Buttons**. |
| `customization.button_hud.badge` | Badge |
| `customization.button_hud.below_icon` | Below Icon |
| `customization.button_hud.shoulder_buttons` | Shoulder Buttons |
| `customization.button_hud.shoulder_buttons.help` | Where the HD layout shows the {btn:Z} and Midna ({btn:MIDNA}) symbols.<br/>**Badge**: small symbol in the icon's corner.<br/>**Below Icon**: under the icon. |
| `customization.button_hud.large_glyphs` | Large Button Symbols |
| `customization.button_hud.large_glyphs.help` | Shows the {btn:A} {btn:B} {btn:X} {btn:Y} symbols large instead of a small badge, with items beside the button. |
| `customization.button_hud.button_color` | Button Color |
| `customization.button_hud.button_color.help` | Color of the HD buttons and button icons. |
| `customization.button_hud.ornament` | Ornament |
| `customization.button_hud.ornament.help` | Decorative frame around the HD buttons. |
| `customization.button_hud.ornament_triforce` | Triforce |
| `customization.button_hud.ornament_vines` | Vines |
| `customization.button_hud.ornament_color` | Ornament Color |
| `customization.button_hud.ornament_color.help` | Color of the ornament. |
| `customization.button_hud.vine_color` | Vine Color |
| `customization.button_hud.vine_color.help` | Color of the vines ornament. |
| `customization.hearts` | Hearts |
| `customization.hearts.damage_effect` | Damage Effect |
| `customization.hearts.damage_effect.help` | Hearts flash and shatter when you lose health. |
| `customization.hearts.heal_effect` | Heal Effect |
| `customization.hearts.heal_effect.help` | Hearts glow and sparkle when you regain health. |
| `customization.boss_bar` | Boss Bar |
| `customization.boss_bar.style.help` | **Default**: Twilight Princess style with brass frame.<br/>**Thinner**: thin bar at the bottom with the boss's full title. |
| `customization.boss_bar.x_offset.help` | Moves the boss bar horizontally. |
| `customization.boss_bar.y_offset.help` | Moves the boss bar vertically. |
| `customization.quick_access.radial` | Radial |
| `customization.quick_access.item_bar_botw_style` | Item Bar (BotW-style) |
| `customization.quick_access.appearance` | Appearance |
| `customization.quick_access.appearance.help` | **Radial**: vanilla item wheel.<br/>**Item Bar**: bar at the top of the screen like in Breath of the Wild. Press {btn:X} in the menu to edit it. |
| `customization.compass.x_offset.help` | Moves the compass horizontally. |
| `customization.compass.y_offset.help` | Moves the compass vertically. |
| `customization.map_markers.x_offset.help` | Moves the Mark / Style hints on the map horizontally. |
| `customization.map_markers.y_offset.help` | Moves the Mark / Style hints on the map vertically. |
| `customization.boss_rush_timer` | Boss Rush Timer |
| `customization.boss_rush_timer.x_offset.help` | Moves the Boss Rush timer horizontally. |
| `customization.boss_rush_timer.y_offset.help` | Moves the Boss Rush timer vertically. |

</details>

<details><summary><code>graphics</code> (146)</summary>

| Key | English |
| --- | --- |
| `graphics.description` | Color and lens effects, swaying foliage, snow on Link and the world, real-time shadows and realistic water. |
| `graphics.color_lens` | Color & Lens |
| `graphics.color_lens.saturation` | Saturation |
| `graphics.color_lens.contrast` | Contrast |
| `graphics.color_lens.temperature` | Temperature |
| `graphics.color_lens.vignette` | Vignette |
| `graphics.color_lens.film_grain` | Film Grain |
| `graphics.color_lens.chromatic_aberration` | Chromatic Aberration |
| `graphics.color_lens.sharpening` | Sharpening |
| `graphics.wind` | Wind |
| `graphics.wind.strength` | Strength |
| `graphics.wind.speed` | Speed |
| `graphics.wind.ambient_breeze` | Ambient Breeze |
| `graphics.wind.cloth` | Cloth |
| `graphics.wind.cloth_strength` | Cloth Strength |
| `graphics.wind.cloth_smoothing` | Tunic Smoothing |
| `graphics.wind.link_only` | Link Only |
| `graphics.wind.link_and_characters` | Link and Characters |
| `graphics.wind.everything` | Everything |
| `graphics.wind.snowpeak_only` | Snowpeak Only |
| `graphics.wind.wherever_it_snows` | Wherever It Snows |
| `graphics.snow_cover` | Snow Cover |
| `graphics.snow_cover.snow_falls_on` | Snow Falls On |
| `graphics.snow_cover.where` | Where |
| `graphics.snow_cover.everywhere` | Everywhere |
| `graphics.snow_cover.max_flakes_on_link` | Max Flakes on Link |
| `graphics.snow_cover.max_flakes_per_model` | Max Flakes per Model |
| `graphics.snow_cover.total_flake_limit` | Total Flake Limit |
| `graphics.snow_cover.range` | Range |
| `graphics.snow_cover.snow_on_the_ground` | Snow on the Ground |
| `graphics.snow_cover.ground_density` | Ground Density |
| `graphics.snow_cover.max_flakes_on_ground` | Max Flakes on Ground |
| `graphics.snow_cover.ground_range` | Ground Range |
| `graphics.snow_cover.ground_flake_size` | Ground Flake Size |
| `graphics.snow_cover.initial_ground_cover` | Initial Ground Cover |
| `graphics.snow_cover.footprints` | Footprints |
| `graphics.snow_cover.build_up_speed` | Build-up Speed |
| `graphics.snow_cover.build_up_while_moving` | Build Up While Moving |
| `graphics.snow_cover.flake_size` | Flake Size |
| `graphics.snow_cover.pile_height` | Pile Height |
| `graphics.snow_cover.shake_off` | Shake Off |
| `graphics.snow_cover.melt_speed` | Melt Speed |
| `graphics.snow_cover.brightness` | Brightness |
| `graphics.snow_cover.ground_no_depth_test` | Ground: No Depth Test |
| `graphics.snow_cover.ground_red_markers` | Ground: Red Markers |
| `graphics.snow_cover.ground_no_camera_pull` | Ground: No Camera Pull |
| `graphics.snow_cover.ground_red_markers_no_depth` | Ground: Red Markers, No Depth |
| `graphics.snow_cover.debug_view` | Debug View |
| `graphics.snow_cover.1024_x_1024_low` | 1024 x 1024 (Low) |
| `graphics.snow_cover.2048_x_2048_medium` | 2048 x 2048 (Medium) |
| `graphics.snow_cover.4096_x_4096_high` | 4096 x 4096 (High) |
| `graphics.snow_cover.8192_x_8192_ultra` | 8192 x 8192 (Ultra) |
| `graphics.snow_cover.hard` | Hard |
| `graphics.snow_cover.soft` | Soft |
| `graphics.snow_cover.very_soft` | Very Soft |
| `graphics.dynamic_shadows` | Dynamic Shadows |
| `graphics.dynamic_shadows.quality` | Quality |
| `graphics.dynamic_shadows.quality_low` | Low |
| `graphics.dynamic_shadows.quality_medium` | Medium |
| `graphics.dynamic_shadows.quality_high` | High |
| `graphics.dynamic_shadows.quality_very_high` | Very High |
| `graphics.dynamic_shadows.quality_ultra` | Ultra |
| `graphics.dynamic_shadows.quality_custom` | Custom |
| `graphics.dynamic_shadows.shadow_map_resolution` | Shadow Map Resolution |
| `graphics.dynamic_shadows.filtering` | Filtering |
| `graphics.dynamic_shadows.distance` | Distance |
| `graphics.dynamic_shadows.darkness` | Darkness |
| `graphics.dynamic_shadows.256_x_256_low` | 256 x 256 (Low) |
| `graphics.dynamic_shadows.512_x_512_medium` | 512 x 512 (Medium) |
| `graphics.dynamic_shadows.1024_x_1024_high` | 1024 x 1024 (High) |
| `graphics.dynamic_shadows.light_source_shadows` | Light Source Shadows |
| `graphics.dynamic_shadows.light_shadow_range` | Light Shadow Range |
| `graphics.dynamic_shadows.light_shadow_resolution` | Light Shadow Resolution |
| `graphics.dynamic_shadows.buffer_usage` | GPU Buffer Usage |
| `graphics.dynamic_shadows.buffer_lights` | Lights |
| `graphics.realistic_water` | Realistic Water |
| `graphics.realistic_water.reflections` | Reflections |
| `graphics.realistic_water.sky_only` | Sky Only |
| `graphics.realistic_water.screen_space` | Screen Space |
| `graphics.realistic_water.screen_space_high` | Screen Space (High) |
| `graphics.realistic_water.reflection_strength` | Reflection Strength |
| `graphics.realistic_water.refraction` | Refraction |
| `graphics.realistic_water.waves` | Waves |
| `graphics.realistic_water.wave_speed` | Wave Speed |
| `graphics.realistic_water.original_color` | Original Color |
| `graphics.realistic_water.surface_pattern` | Surface Pattern |
| `graphics.realistic_water.surface_light` | Surface Light |
| `graphics.realistic_water.shore_foam` | Shore Foam |
| `graphics.realistic_water.caustics` | Caustics |
| `graphics.realistic_water.caustic_dispersion` | Caustic Dispersion |
| `graphics.realistic_water.sun_glints` | Sun Glints |
| `graphics.realistic_water.glint_size` | Sun Glint Size |
| `graphics.realistic_water.waterfalls` | Waterfalls |
| `graphics.realistic_water.waterfalls_splash` | Splash only |
| `graphics.realistic_water.waterfalls_reflection` | Reflection only |
| `graphics.realistic_water.waterfalls_both` | Splash + Reflection |
| `graphics.realistic_water.underwater` | Underwater Effect |
| `graphics.realistic_water.camera_drops` | Water Drops on Camera |
| `graphics.realistic_water.mirror` | Mirror |
| `graphics.realistic_water.mirror_high` | Mirror (High) |
| `graphics.volumetric` | Volumetric Clouds & Lighting |
| `graphics.volumetric.temporal` | Temporal Smoothing |
| `graphics.volumetric.clouds` | Clouds |
| `graphics.volumetric.coverage` | Cloud Coverage |
| `graphics.volumetric.density` | Cloud Density |
| `graphics.volumetric.altitude` | Cloud Altitude |
| `graphics.volumetric.thickness` | Cloud Thickness |
| `graphics.volumetric.size` | Cloud Size |
| `graphics.volumetric.speed` | Cloud Speed |
| `graphics.volumetric.detail` | Cloud Detail |
| `graphics.volumetric.brightness` | Cloud Brightness |
| `graphics.volumetric.silver_lining` | Silver Lining |
| `graphics.volumetric.distance` | Cloud Draw Distance |
| `graphics.volumetric.weather` | Weather |
| `graphics.volumetric.weather_game` | Game |
| `graphics.volumetric.weather_snow` | Snow |
| `graphics.volumetric.precip_intensity` | Precipitation Intensity |
| `graphics.volumetric.weather_hail` | Hail |
| `graphics.volumetric.lightning` | Lightning Flashes |
| `graphics.volumetric.game_clouds` | Game Clouds |
| `graphics.volumetric.game_clouds_show` | Show |
| `graphics.volumetric.game_clouds_hide_moving` | Hide Moving Clouds |
| `graphics.volumetric.game_clouds_hide_all` | Hide All |
| `graphics.volumetric.cloud_shadows` | Cloud Shadows |
| `graphics.volumetric.cloud_shadow_strength` | Cloud Shadow Strength |
| `graphics.volumetric.light` | Volumetric Light |
| `graphics.volumetric.light_intensity` | Light Shaft Intensity |
| `graphics.volumetric.fog_density` | Fog Density |
| `graphics.volumetric.fog_height` | Fog Height |
| `graphics.volumetric.light_range` | Light Range |
| `graphics.volumetric.sun_glow` | Sun Glow |
| `graphics.volumetric.night_light` | Moonlight |
| `graphics.volumetric.rays` | Light Rays |
| `graphics.volumetric.ray_intensity` | Light Ray Intensity |
| `graphics.volumetric.ray_length` | Light Ray Length |
| `graphics.volumetric.lens_flare` | Lens Flare |
| `graphics.volumetric.lens_flare_game` | Game |
| `graphics.volumetric.lens_flare_realistic` | Realistic |
| `graphics.volumetric.flare_intensity` | Lens Flare Intensity |
| `graphics.volumetric.flare_ghosts` | Lens Ghosts |
| `graphics.volumetric.flare_starburst` | Starburst |
| `graphics.volumetric.flare_halo` | Lens Halo |
| `graphics.volumetric.above_terrain` | Keep Clouds Above Terrain |
| `graphics.dynamic_shadows.light_source_shadows_warning` | Can cause flickering in certain areas and situations. |
| `graphics.realistic_water.mirror_distortion` | Mirror Distortion |
| `graphics.realistic_water.mirror_distortion_scale` | Mirror Distortion Scale |

</details>

<details><summary><code>photo_mode</code> (222)</summary>

| Key | English |
| --- | --- |
| `photo_mode.tabs.track` | Track |
| `photo_mode.tabs.lens` | Lens |
| `photo_mode.tabs.effects` | Effects |
| `photo_mode.tabs.scene` | Scene |
| `photo_mode.tabs.frame` | Frame |
| `photo_mode.tabs.presets` | Presets |
| `photo_mode.options.free` | Free |
| `photo_mode.options.orbit` | Orbit |
| `photo_mode.options.link` | Link |
| `photo_mode.options.screen_center` | Screen center |
| `photo_mode.options.manual` | Manual |
| `photo_mode.options.clear` | Clear |
| `photo_mode.options.cloudy` | Cloudy |
| `photo_mode.options.rain` | Rain |
| `photo_mode.options.storm` | Storm |
| `photo_mode.options.snow` | Snow |
| `photo_mode.options.fog` | Fog |
| `photo_mode.options.pollen` | Pollen |
| `photo_mode.options.none` | None |
| `photo_mode.options.vivid` | Vivid |
| `photo_mode.options.black_white` | Black & White |
| `photo_mode.options.vintage` | Vintage |
| `photo_mode.options.cinematic` | Cinematic |
| `photo_mode.options.golden_hour` | Golden Hour |
| `photo_mode.options.frost` | Frost |
| `photo_mode.options.twilight` | Twilight |
| `photo_mode.options.dreamy` | Dreamy |
| `photo_mode.options.kurosawa` | Kurosawa |
| `photo_mode.options.rule_of_thirds` | Rule of thirds |
| `photo_mode.options.center` | Center |
| `photo_mode.options.performance` | Performance |
| `photo_mode.options.balanced` | Balanced |
| `photo_mode.options.quality` | Quality |
| `photo_mode.options.leaves` | Leaves |
| `photo_mode.options.petals` | Petals |
| `photo_mode.options.fireflies` | Fireflies |
| `photo_mode.options.embers` | Embers |
| `photo_mode.options.dust` | Dust |
| `photo_mode.options.twilight_shards` | Twilight shards |
| `photo_mode.options.ash` | Ash |
| `photo_mode.options.sparkles` | Sparkles |
| `photo_mode.options.tears_of_light` | Tears of Light |
| `photo_mode.options.spores` | Spores |
| `photo_mode.options.mist` | Mist |
| `photo_mode.options.dusk` | Dusk |
| `photo_mode.options.cool_blue` | Cool blue |
| `photo_mode.options.golden` | Golden |
| `photo_mode.options.waypoints` | Waypoints |
| `photo_mode.options.along_the_path` | Along the path |
| `photo_mode.options.viewfinder` | Viewfinder |
| `photo_mode.options.triforce` | Triforce |
| `photo_mode.options.twilight_border` | Twilight border |
| `photo_mode.options.golden_corners` | Golden corners |
| `photo_mode.particles` | Particles |
| `photo_mode.help.adds_drifting_leaves_petals_fireflies_and` | Adds leaves, petals, fireflies and more. |
| `photo_mode.particle_amount` | Particle amount |
| `photo_mode.help.how_many_particles_there_are` | How many particles there are. |
| `photo_mode.particle_size` | Particle size |
| `photo_mode.help.how_big_the_particles_are` | How big the particles are. |
| `photo_mode.wind_direction` | Wind direction |
| `photo_mode.help.which_way_the_wind_blows_the` | Wind direction. 90 blows to the right. |
| `photo_mode.wind_strength` | Wind strength |
| `photo_mode.help.how_hard_the_wind_pushes_the` | How hard the wind pushes the particles. |
| `photo_mode.sun_rays` | Sun rays |
| `photo_mode.help.light_shafts_that_shine_out_of` | Light shafts that shine out of bright areas. |
| `photo_mode.rays_source_x` | Rays source X |
| `photo_mode.help.horizontal_position_the_rays_come_from` | Horizontal position the rays come from. |
| `photo_mode.rays_source_y` | Rays source Y |
| `photo_mode.help.vertical_position_the_rays_come_from` | Vertical position the rays come from. |
| `photo_mode.atmosphere_haze` | Atmosphere haze |
| `photo_mode.help.colored_haze_that_gets_thicker_with` | Colored haze that gets thicker with distance. |
| `photo_mode.haze_color` | Haze color |
| `photo_mode.help.color_of_the_haze` | Color of the haze. |
| `photo_mode.overlay` | Overlay |
| `photo_mode.help.ready_made_picture_overlays_like_a` | Overlays like a viewfinder or a Triforce emblem. |
| `photo_mode.overlay_opacity` | Overlay opacity |
| `photo_mode.help.how_visible_the_overlay_is` | How visible the overlay is. |
| `photo_mode.date_stamp` | Date stamp |
| `photo_mode.help.orange_date_in_the_corner_like` | Shows the date in the bottom right corner. |
| `photo_mode.duration` | Duration |
| `photo_mode.help.how_long_one_run_from_the` | Duration of one run at 100% waypoint speed. |
| `photo_mode.look_direction` | Look direction |
| `photo_mode.help.waypoints_turns_the_camera_to_the` | Waypoints: the view saved per waypoint. Link: always looks at Link. Along the path: looks where it flies. |
| `photo_mode.loop` | Loop |
| `photo_mode.help.flies_from_the_last_waypoint_back` | Starts over after the last waypoint. |
| `photo_mode.play_camera_track` | Play camera track |
| `photo_mode.play_camera_track_1f_s` | Play camera track (%.1f s) |
| `photo_mode.play_camera_track_0f_s` | Play camera track (%.0f s) |
| `photo_mode.camera_mode` | Camera mode |
| `photo_mode.camera_speed` | Camera speed |
| `photo_mode.field_of_view` | Field of view |
| `photo_mode.roll` | Roll |
| `photo_mode.orbit_distance` | Orbit distance |
| `photo_mode.collision` | Collision |
| `photo_mode.always_look_at_link` | Always look at Link |
| `photo_mode.smoothness` | Smoothness |
| `photo_mode.blur_quality` | Blur quality |
| `photo_mode.tilt_shift` | Tilt-shift |
| `photo_mode.tilt_shift_position` | Tilt-shift position |
| `photo_mode.tilt_shift_sharp_area` | Tilt-shift sharp area |
| `photo_mode.sharpen` | Sharpen |
| `photo_mode.shadows` | Shadows |
| `photo_mode.hue_shift` | Hue shift |
| `photo_mode.lens_distortion` | Lens distortion |
| `photo_mode.take_photo` | Take photo |
| `photo_mode.reset_camera` | Reset camera |
| `photo_mode.depth_of_field` | Depth of field |
| `photo_mode.focus_on` | Focus on |
| `photo_mode.focus_distance` | Focus distance |
| `photo_mode.focus_speed` | Focus speed |
| `photo_mode.aperture` | Aperture |
| `photo_mode.focus_preview` | Focus preview |
| `photo_mode.filter` | Filter |
| `photo_mode.filter_strength` | Filter strength |
| `photo_mode.exposure` | Exposure |
| `photo_mode.tint` | Tint |
| `photo_mode.film_grain` | Film grain |
| `photo_mode.glow` | Glow |
| `photo_mode.chromatic_aberration` | Chromatic aberration |
| `photo_mode.reset_effects` | Reset effects |
| `photo_mode.freeze_world` | Freeze world |
| `photo_mode.time_of_day` | Time of day |
| `photo_mode.weather` | Weather |
| `photo_mode.hide_link` | Hide Link |
| `photo_mode.aspect_ratio` | Aspect ratio |
| `photo_mode.grid` | Grid |
| `photo_mode.hide_interface` | Hide interface |
| `photo_mode.reset_everything` | Reset everything |
| `photo_mode.add_waypoint` | Add waypoint |
| `photo_mode.selected_waypoint` | Selected waypoint |
| `photo_mode.waypoint_speed` | Waypoint speed |
| `photo_mode.minimum_time` | Minimum time |
| `photo_mode.go_to_waypoint` | Go to waypoint |
| `photo_mode.update_waypoint` | Update waypoint |
| `photo_mode.delete_waypoint` | Delete waypoint |
| `photo_mode.delete_all_waypoints` | Delete all waypoints |
| `photo_mode.saved_track` | Saved track |
| `photo_mode.track_name` | Track name |
| `photo_mode.save_track` | Save track |
| `photo_mode.delete_saved_track` | Delete saved track |
| `photo_mode.preset` | Preset |
| `photo_mode.preset_name` | Preset name |
| `photo_mode.save_preset` | Save preset |
| `photo_mode.delete_preset` | Delete preset |
| `photo_mode.automatic` | Automatic |
| `photo_mode.d_of_d` | %d of %d |
| `photo_mode.help.free_flies_anywhere_orbit_circles_around` | Free flies anywhere. Orbit circles around a point in front of the camera. |
| `photo_mode.help.how_fast_the_camera_moves` | How fast the camera moves. |
| `photo_mode.help.zoom_of_the_camera_lower_values` | Zoom of the camera. Lower values zoom in. |
| `photo_mode.help.tilts_the_camera_hold_s_and` | Tilts the camera. Hold %s and press %s or %s to roll it left or right. |
| `photo_mode.help.distance_between_the_camera_and_the` | Distance between the camera and the point it circles around. |
| `photo_mode.help.stops_the_camera_at_walls_and` | Stops the camera at walls and the ground. |
| `photo_mode.help.the_camera_keeps_link_in_the` | Always keeps Link in the center. |
| `photo_mode.help.how_softly_the_camera_speeds_up` | How smoothly the camera moves and turns. |
| `photo_mode.help.more_samples_give_smoother_blur_but` | Higher is smoother but slower. Use Quality for photos. |
| `photo_mode.help.blurs_the_top_and_bottom_of` | Blurs top and bottom for a miniature look. |
| `photo_mode.help.height_of_the_sharp_stripe_on` | Height of the sharp stripe on the screen. |
| `photo_mode.help.how_tall_the_sharp_stripe_is` | How tall the sharp stripe is. |
| `photo_mode.help.makes_edges_crisper_not_used_while` | Makes edges crisper. Not used while blur is on. |
| `photo_mode.help.brightens_or_darkens_only_the_dark` | Brightens or darkens only the dark areas. |
| `photo_mode.help.rotates_all_colors_around_the_color` | Rotates all colors around the color wheel. |
| `photo_mode.help.fisheye_bulge_or_pincushion_pinch_like` | Fisheye bulge or pincushion pinch. |
| `photo_mode.help.press_s_to_move_the_camera` | Press %s to reset the camera position. |
| `photo_mode.help.blurs_everything_in_front_of_and` | Blurs everything outside the focus. |
| `photo_mode.help.keeps_link_sharp_whatever_is_in` | What stays sharp: Link, the screen center or a fixed distance. |
| `photo_mode.help.distance_of_the_sharp_area_from` | Distance of the sharp area from the camera. |
| `photo_mode.help.how_fast_the_focus_follows_when` | How fast the focus adjusts. |
| `photo_mode.help.lower_numbers_give_a_stronger_blur` | Lower means stronger blur. |
| `photo_mode.help.tints_the_sharp_area_green_while` | Tints the sharp area green while this tab is open. |
| `photo_mode.help.twilight_look_including_the_floating_black` | Twilight look, including the floating black Twilight squares. |
| `photo_mode.help.color_look_applied_to_the_whole` | Color look applied to the whole picture. |
| `photo_mode.help.how_strongly_the_filter_is_applied` | How strongly the filter is applied. |
| `photo_mode.help.brightness_of_the_picture` | Brightness of the picture. |
| `photo_mode.help.difference_between_dark_and_bright_areas` | Difference between dark and bright areas. |
| `photo_mode.help.color_intensity_0_is_black_and` | Color intensity. 0%% is black and white. |
| `photo_mode.help.cool_blue_to_warm_orange` | Cool blue to warm orange. |
| `photo_mode.help.green_to_magenta` | Green to magenta. |
| `photo_mode.help.darkens_the_corners_of_the_picture` | Darkens the corners of the picture. |
| `photo_mode.help.noise_like_on_analog_film` | Noise like on analog film. |
| `photo_mode.help.soft_light_bleeding_around_bright_areas` | Soft light bleeding around bright areas. |
| `photo_mode.help.color_fringes_towards_the_edges_like` | Color fringes towards the edges. |
| `photo_mode.help.press_s_to_set_all_effects` | Press %s to set all effects back to neutral. |
| `photo_mode.help.pauses_link_enemies_characters_and_particles` | Freezes Link, enemies, characters and particles. |
| `photo_mode.help.changes_the_time_of_day_outdoors` | Time of day outdoors. %s resets to the real time. |
| `photo_mode.help.changes_the_weather_while_the_photo` | Changes the weather. |
| `photo_mode.help.hides_link_and_midna_for_scenery` | Hides Link (and Midna) for scenery shots. |
| `photo_mode.help.adds_black_bars_for_a_different` | Adds black bars for a different picture format. |
| `photo_mode.help.composition_guide_it_disappears_together_with` | Composition guide, hidden with the interface. |
| `photo_mode.help.press_s_or_s_to_hide` | Press %s or %s to hide the interface. |
| `photo_mode.help.press_s_or_s_to_save` | Press %s or %s to save a PNG to Pictures / Twilit Essentials. |
| `photo_mode.help.press_s_to_reset_camera_track` | Press %s to reset everything except the waypoints. |
| `photo_mode.help.press_s_to_save_the_current` | Press %s to add the current view as a waypoint after the selected one. |
| `photo_mode.help.press_s_to_fly_through_all` | Press %s to play the track (needs 2 waypoints). While playing, %s freezes the world and {btn:DPAD_LEFT_RIGHT} change the game speed. |
| `photo_mode.help.the_waypoint_that_speed_go_to` | The waypoint used by speed, Go to, Update and Delete (shown in blue). |
| `photo_mode.help.camera_speed_at_the_selected_waypoint` | Camera speed at this waypoint (100%% is normal). Slow parts of the path are green, fast ones red. |
| `photo_mode.help.least_time_to_reach_this_waypoint` | Least time in seconds to reach this waypoint. 0 is off. |
| `photo_mode.help.press_s_to_move_the_camera_2` | Press %s to move the camera to the selected waypoint. |
| `photo_mode.help.press_s_to_replace_the_selected` | Press %s to replace the selected waypoint with the current view. |
| `photo_mode.help.press_s_to_remove_the_selected` | Press %s to remove the selected waypoint. |
| `photo_mode.help.press_s_to_remove_all_waypoints` | Press %s to remove all waypoints. |
| `photo_mode.help.your_saved_presets_choosing_one_loads` | Choosing a preset loads it. None resets everything. |
| `photo_mode.help.camera_tracks_saved_in_this_area` | Tracks saved in this area. Choosing one loads it. |
| `photo_mode.help.name_for_the_track_choosing_a` | Track name. Empty gives a numbered name. |
| `photo_mode.help.press_s_to_save_all_waypoints` | Press %s to save the track. It only shows up in this area. |
| `photo_mode.help.press_s_to_delete_the_chosen` | Press %s to delete the chosen saved track. |
| `photo_mode.help.name_for_the_preset_choosing_a` | Preset name. Empty gives a numbered name. |
| `photo_mode.help.press_s_to_save_all_current` | Press %s to save all settings as a preset. The same name overwrites it. |
| `photo_mode.help.press_s_to_delete_the_chosen_2` | Press %s to delete the chosen preset. |
| `photo_mode.hints.down_up` | Down/Up |
| `photo_mode.hints.photo` | Photo |
| `photo_mode.hints.hide` | Hide |
| `photo_mode.hints.exit` | Exit |
| `photo_mode.press_s_to_show_the` | Press %s to show the interface |
| `photo_mode.photo_mode` | Photo Mode |
| `photo_mode.left_and_right_on_the` | {btn:DPAD_LEFT_RIGHT} switch tabs, {btn:DPAD_DOWN} goes back to the settings. |
| `photo_mode.photo_mode_2` | PHOTO MODE |
| `photo_mode.photo_saved_s` | Photo saved: %s |
| `photo_mode.the_photo_could_not_be` | The photo could not be saved |
| `photo_mode.saved_tracks` | Saved tracks |
| `photo_mode.photo_saved` | Photo saved |
| `photo_mode.photo_failed` | Photo failed |
| `photo_mode.the_photo_could_not_be_2` | The photo could not be saved. |

</details>

<details><summary><code>flurry</code> (33)</summary>

| Key | English |
| --- | --- |
| `flurry.sky_oath` | The oath of old has been sworn anew...\nA forgotten teaching awaits you... |
| `flurry.sky_find` | Take sword in hand and find me...\nwhere the Temple of Time once stood,\ndeep within the Sacred Grove... |
| `flurry.intro_greet` | {V}So... you have come. |
| `flurry.intro_oath` | The howl you raised at the stone\nwas an ancient oath... sworn long ago\nby those who stood against the dark. |
| `flurry.intro_offer` | To one who renews that oath, I may\npass on a skill that lies beyond all\nthe others I have taught... |
| `flurry.intro_warn` | It is a technique that dances on the\nedge of a blade. Should your timing\nfail you, you will be struck down. |
| `flurry.intro_ask` | Do you feel ready to learn it? |
| `flurry.option_yes` | I do. |
| `flurry.option_no` | I do not. |
| `flurry.intro_decline` | In that case, return to your world\nand train yourself further. When you\nare prepared, come visit me again. |
| `flurry.intro_accept` | Very well. My eighth hidden skill is... |
| `flurry.intro_hewn` | The *flurry rush*! Let it be hewn\ninto your mind! |
| `flurry.banner` | Hidden Skill: Flurry Rush{W} |
| `flurry.explain1` | When a foe strikes, do not merely\nraise your shield. *Evade* the blow at\nthe very last moment! |
| `flurry.explain2` | {L}*Lock on* to me. Just as my blade\ncomes down, tilt {S} sideways or\nback and press {A} to leap aside. |
| `flurry.explain3` | If your timing is true, time itself\nwill slow for you. Then strike me\nwith {B} again and again! |
| `flurry.come_at_me` | Now then, come at me! |
| `flurry.fail_hit1` | {V}Too slow! Wait for my blade to\ncome down... then evade it at the\nvery last moment! |
| `flurry.fail_hit2` | What ails you? Do not leap away\nbefore my blade falls... but do not\nwait too long, either! |
| `flurry.fail_ask` | Will you continue your training? |
| `flurry.fail_rush` | You evaded it well! But when time\nslows, you must strike without\nhesitation. Again! |
| `flurry.fail_head` | Striking at me head-on teaches you\nnothing. *Evade* my attack first! |
| `flurry.outro_praise` | {V}Hmm. Impressive... Your blade moved\nfaster than time itself. |
| `flurry.outro_passed` | The eighth hidden skill, the flurry\nrush, has been passed on! |
| `flurry.outro_get` | {J}{T1}You learned the eighth hidden\nskill, the *flurry rush*!{T2} {P}Evade a\nfoe's attack at the last moment,\nthen strike again and again! |
| `flurry.outro_hone` | Hone this skill, and never forget\nthe oath you have sworn. |
| `flurry.outro_farewell` | May we meet again! |
| `flurry.midna_hint1` | {N}... Do you feel that? Something\nis stirring deep in the Sacred Grove. |
| `flurry.midna_hint2` | Right where the Temple of Time once\nstood... Maybe that old swordsman\nstill has something to teach you! |
| `flurry.menu_label` | Skill Eight |
| `flurry.menu_name` | Flurry Rush |
| `flurry.menu_desc` | While {L}*-targeting*, sidestep or\nbackflip with {A} just as a foe\nstrikes. Time will slow, letting you\nstrike with {B} again and again! |
| `flurry.menu_label_seven` | Skill Seven |

</details>

<details><summary><code>map_markers</code> (45)</summary>

| Key | English |
| --- | --- |
| `menus.remove` | Remove |
| `menus.remove_all_markers` | Remove all markers |
| `menus.remove_every_map_marker_of` | Remove all map markers of this save? |
| `menus.remove_every_map_marker_of.help` | Menu, map and collection screen options. |
| `menus.map_markers` | Map Markers |
| `menus.map_markers.enabled.help` | Place markers on the map like in Breath of the Wild. {btn:Y} places or removes a marker, {btn:X} picks symbol and color. |
| `menus.map_markers.light_beams_in_the_world` | Light beams in the world |
| `menus.map_markers.light_beams_in_the_world.help` | Shows a light beam at every Beacon in the world. |
| `menus.map_markers.hide_icons_in_light_beams` | Hide icons in light beams |
| `menus.map_markers.hide_icons_in_light_beams.help` | Hides the symbol at the bottom of light beams. |
| `menus.map_markers.compass.help` | Shows a compass bar with your Beacons at the top of the screen. |
| `menus.map_markers.remove_when_reached` | Remove when reached |
| `menus.map_markers.remove_when_reached.help` | Markers are removed when Link reaches them. |
| `menus.map_markers.show_on_minimap` | Show on minimap |
| `menus.map_markers.show_on_minimap.help` | Also shows your markers on the minimap. |
| `menus.map_markers.show_markers_from_other_areas` | Show markers from other areas |
| `menus.map_markers.show_markers_from_other_areas.help` | Also shows markers from neighbouring areas on the minimap, like other parts of Hyrule Field. |
| `menus.map_markers.marker_size` | Marker size |
| `menus.map_markers.marker_size.help` | Size of the markers on the map. |
| `menus.map_markers.remove_all_markers.help` | Removes all markers of this save. |
| `map_markers.hints.mark` | Mark |
| `map_markers.hints.removed` | Removed |
| `map_markers.hints.remove_all` | Remove all |
| `map_markers.hints.back` | Back |
| `map_markers.palette.title` | Style  %d/%d |
| `map_markers.symbols.beacon` | Beacon |
| `map_markers.symbols.star` | Star |
| `map_markers.symbols.heart` | Heart |
| `map_markers.symbols.skull` | Skull |
| `map_markers.symbols.chest` | Chest |
| `map_markers.symbols.poe` | Poe |
| `map_markers.symbols.alert` | Alert |
| `map_markers.symbols.insect` | Insect |
| `map_markers.colors.red` | Red |
| `map_markers.colors.orange` | Orange |
| `map_markers.colors.yellow` | Yellow |
| `map_markers.colors.green` | Green |
| `map_markers.colors.blue` | Blue |
| `map_markers.colors.purple` | Purple |
| `map_markers.colors.pink` | Pink |
| `map_markers.compass.north` | N |
| `map_markers.compass.east` | E |
| `map_markers.compass.south` | S |
| `map_markers.compass.west` | W |
| `map_markers.colors.white` | White |

</details>

<details><summary><code>collection</code> (69)</summary>

| Key | English |
| --- | --- |
| `menus.collection_screen` | Collection Screen |
| `menus.collection_screen.add_wooden_sword_ordon_shield` | Add wooden sword, ordon shield and ordon clothes |
| `menus.collection_screen.add_wooden_sword_ordon_shield.help` | Adds Wooden Sword, Ordon Shield and Ordon Clothes to the Collection screen. |
| `menus.collection_screen.keep_ordon_shield_in_collection` | Keep Ordon Shield in collection |
| `menus.collection_screen.keep_ordon_shield_in_collection.help` | Keeps the Ordon Shield in the Collection even after it burns. Needs the starter gear option. |
| `menus.collection_screen.show_ordon_hero` | Show Ordon Hero |
| `menus.collection_screen.show_ordon_hero.help` | Adds the Reinforced Shield and the Ordon Hero tunic on a second Collection page (hold {btn:R} or {btn:L} to switch). Not available with Linkle. |
| `menus.collection_screen.note_the_ordon_hero_gear` | The Ordon Hero gear is off while the Linkle mod is enabled. |
| `menus.collection_screen.show_always_ordon_hero` | Show always Ordon Hero |
| `menus.collection_screen.show_always_ordon_hero.help` | Shows the Ordon Hero gear right away instead of only after getting the Hero's Clothes. |
| `menus.collection_screen.show_yeti_tunic` | Show Yeti Tunic |
| `menus.collection_screen.show_yeti_tunic.help` | Shows the Yeti Tunic in the Collection once you have it. |
| `menus.collection_screen.yeti_textures` | Yeti Textures |
| `menus.collection_screen.yeti_textures.help` | Only Tunic changes just the clothes, but switches the sword, shield, bow, face and hair to the Yeti look on Snowpeak and in Snowpeak Ruins. |
| `menus.collection_screen.yeti_textures.tunic` | Only Tunic |
| `menus.collection_screen.yeti_textures.all` | Everything |
| `collection.ordon_hero.name` | Ordon Hero |
| `collection.ordon_hero.description` | Traditional clothes worn by the hero of Ordon. Simple, but made for adventure. |
| `collection.reinforced_shield.name` | Reinforced Shield |
| `collection.reinforced_shield.description` | A traditional Ordon shield reinforced with metal. Stronger and will never burn. |
| `collection.ordon_clothes.name` | Ordon Clothes |
| `collection.ordon_clothes.description` | The clothes Link wore at the beginning\nof his journey in Ordon Village. |
| `collection.linkle_clothes.name` | Linkle's Clothes |
| `collection.linkle_clothes.description` | The clothes Linkle wore at the beginning\nof her journey in Ordon Village. |
| `collection.yeti_tunic.name` | Yeti Tunic |
| `collection.yeti_tunic.description` | Warm clothes lined with yeti fur. Made to brave the bitter cold. |
| `collection.yeti_tunic.freeze` | Grants immunity to freezing. |
| `collection.yeti_tunic.ashei` | Oh, and one more thing... It's pretty\ncold up here. Take this, it'll keep\nyou warm. |
| `collection.yeti_tunic.get` | You got the *Yeti Tunic*!\nLined with yeti fur, it keeps\nthe bitter cold at bay. |
| `collection.tunics.hero` | Hero's Clothes |
| `collection.tunics.zora` | Zora Armor |
| `collection.tunics.magic` | Magic Armor |
| `collection.unequip` | Unequip |
| `menus.collection_tracker` | Collection Tracker |
| `menus.collection_tracker.help` | Shows found **chests**, **Pieces of Heart**, **golden bugs** and **Poe Souls** per region on the map. |
| `menus.collection_screen.advanced_screen` | Advanced Collection Screen |
| `menus.collection_screen.advanced_screen.help` | Replaces the Collection screen with a new tabbed design. |
| `menus.collection_screen.dpad_items` | D-pad Up opens Items |
| `menus.collection_screen.dpad_items.help` | {btn:DPAD_UP} opens the Items tab instead of the item wheel. |
| `menus.collection_screen.item_glyphs` | Item Button Glyphs |
| `menus.collection_screen.item_glyphs.help` | Shows the X/Y/Z glyphs on assigned items even without {btn:DPAD_UP} opening Items. |
| `menus.collection_screen.save_preview` | Save Preview |
| `menus.collection_screen.save_preview.help` | Saving takes a small screenshot that the file select shows next to each file. |
| `advanced_collection.tab.equipment` | Equipment |
| `advanced_collection.tab.tools` | Items |
| `advanced_collection.tab.collection` | Collection |
| `advanced_collection.tab.expansions` | Expansions |
| `advanced_collection.tab.settings` | Settings |
| `advanced_collection.expansions.wallets` | Wallets |
| `advanced_collection.expansions.bomb_bags` | Bomb Bags |
| `advanced_collection.expansions.quivers` | Quivers |
| `advanced_collection.settings.load` | Load |
| `advanced_collection.settings.load.help` | Loads another quest log right away. Unsaved progress is lost. |
| `advanced_collection.load.which` | Load which quest log? |
| `advanced_collection.load.question` | Load this quest log? |
| `advanced_collection.load.warning` | Unsaved progress will be lost. |
| `advanced_collection.options.targeting.help` | Hold: lock on only while holding the button. Switch: press once to lock on, again to release. |
| `advanced_collection.options.rumble.help` | Turns controller vibration on or off. |
| `advanced_collection.options.sound.help` | Sets how the game audio is output. |
| `advanced_collection.not_found` | Not found yet. |
| `advanced_collection.bugs.given` | Given to Agitha |
| `advanced_collection.poes.dungeons` | Dungeons |
| `advanced_collection.settings.reset` | Reset |
| `advanced_collection.settings.reset.help` | Returns to the title screen. Unsaved progress is lost. |
| `advanced_collection.reset.title` | Reset the game? |
| `advanced_collection.settings.exit` | Exit Game |
| `advanced_collection.settings.exit.help` | Closes Dusklight. Unsaved progress is lost. |
| `advanced_collection.exit.title` | Exit the game? |
| `advanced_collection.exit.warning` | All progress since your last save will be lost. |

</details>
