/* ------------------------------------ */
/* AUTHOR   Arwent                      */
/*    FOR   Az'gath Private Server      */
/* ------------------------------------ */

class arwent_gift_mount : public PlayerScript
{
private:
    bool isEnabled = true; /* � changer en false le 26/07/2020 */
    uint32 flySpell = 90265; /* Ma�tre cavalier */
    uint32 mountSpell = 307932; /* Wyrm �ternel ensorcel� */

public:
    arwent_gift_mount() : PlayerScript("arwent_gift_mount") {}

    void OnLogin(Player* player, bool /*firstLogin*/) {
        if (isEnabled) {
            if (!player->HasSpell(flySpell)) {
                player->LearnSpell(flySpell, false);
            }

            if (!player->HasSpell(mountSpell)) {
                player->LearnSpell(mountSpell, false);
            }
        }
    }
};

void AddSC_arwent_gift_mount()
{
    new arwent_gift_mount();
}
