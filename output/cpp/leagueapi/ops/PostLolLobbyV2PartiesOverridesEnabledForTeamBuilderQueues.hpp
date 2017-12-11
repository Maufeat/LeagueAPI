#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolLobbyV2PartiesOverridesEnabledForTeamBuilderQueues (const https::Info& _info_,
      const bool& enabledForTeambuilderQueues /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-lobby/v2/parties/overrides/EnabledForTeamBuilderQueues?", { 
      { "enabledForTeambuilderQueues", to_string(enabledForTeambuilderQueues) },
    }, { 
    }) };
  }
} 