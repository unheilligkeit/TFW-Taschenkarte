class CfgPatches
{
    class Fm
    {
        units[]={""};
        requiredVersion= 1;
        version= 1;
        fileName = "taschenkarte.pbo";
        author = "Florian Meier";
        authors[]= {"Florian Meier"};
        url = "http://task-force-wolf.eu";
    };
};

#include "defines.hpp"
#include "taschenkarte.hpp"

class CfgVehicles
{
    class Man;
    class CAManBase: Man
    {
        class ACE_SelfActions
        {
                class handbuch
                {
                displayName = "Handbuch";
                condition = "";
                exceptions[] = {};
                statement = "";
                icon = "\tfw_taschenkarte\ui\acebuch.paa";

                    class taschenkarte_inf
                    {
                    displayName = "Taschenkarte Inf";
                    condition = "";
                    exceptions[] = {};
                    statement = "createDialog 'taschenkarte_dialog' ";
                    icon = "\tfw_taschenkarte\ui\acesite.paa";
                    };

                    class taschenkarte_kdo
                    {
                    displayName = "Taschenkarte Kdo";
                    condition = "";
                    exceptions[] = {};
                    statement = "createDialog 'taschenkarte_kdo_dialog' ";
                    icon = "\tfw_taschenkarte\ui\acesite.paa";
                    };

                    class taschenkarte_log
                    {
                    displayName = "Taschenkarte Log";
                    condition = "";
                    exceptions[] = {};
                    statement = "createDialog 'taschenkarte_log_dialog' ";
                    icon = "\tfw_taschenkarte\ui\acesite.paa";
                    };

                    class taschenkarte_jtac
                    {
                    displayName = "Taschenkarte Jtac";
                    condition = "";
                    exceptions[] = {};
                    statement = "createDialog 'taschenkarte_jtac_dialog' ";
                    icon = "\tfw_taschenkarte\ui\acesite.paa";
                    };



                };

        };

    };

};


