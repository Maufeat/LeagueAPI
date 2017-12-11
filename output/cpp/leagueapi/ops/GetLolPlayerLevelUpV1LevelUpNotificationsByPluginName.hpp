#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/PlayerLevelUpEventAck.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<PlayerLevelUpEventAck> GetLolPlayerLevelUpV1LevelUpNotificationsByPluginName (const https::Info& _info_,
      const std::string& pluginName /**/ )
  { 
    return { https::Do(_info_, "get", "/lol-player-level-up/v1/level-up-notifications/"+to_string(pluginName)+"?", { 
    }, { 
    }) };
  }
} 