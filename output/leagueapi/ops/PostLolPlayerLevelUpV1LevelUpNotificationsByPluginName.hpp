#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerLevelUpEventAck.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> PostLolPlayerLevelUpV1LevelUpNotificationsByPluginName (const https::Info& _info_,
      const std::string& pluginName /**/,
      const PlayerLevelUpEventAck& levelUpEventAck /**/ )
  { 
    return { https::Do(_info_, "post", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?", { 
    }, { 
    },levelUpEventAck) };
  }
} 