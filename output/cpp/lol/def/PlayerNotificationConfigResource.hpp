#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerNotificationConfigResource { 
    std::optional<uint64_t> ExpirationCheckFrequency; 
  };
  inline void to_json(json& j, const PlayerNotificationConfigResource& v) {
    if(v.ExpirationCheckFrequency)
      j["ExpirationCheckFrequency"] = *v.ExpirationCheckFrequency;
  }
  inline void from_json(const json& j, PlayerNotificationConfigResource& v) {
    if(auto it = j.find("ExpirationCheckFrequency"); it != j.end() && !it->is_null())
      v.ExpirationCheckFrequency = it->get<std::optional<uint64_t>>(); 
  }
}