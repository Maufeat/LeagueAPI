#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PlayerNotificationConfigResource { /**/ 
    std::optional<uint64_t> ExpirationCheckFrequency;/**/
  };
  static void to_json(json& j, const PlayerNotificationConfigResource& v) { 
    j["ExpirationCheckFrequency"] = v.ExpirationCheckFrequency;
  }
  static void from_json(const json& j, PlayerNotificationConfigResource& v) { 
    v.ExpirationCheckFrequency = j.at("ExpirationCheckFrequency").get<std::optional<uint64_t>>(); 
  }
} 