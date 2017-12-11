#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatSettingsResource { /**/ 
    json data;/**/
  };
  static void to_json(json& j, const LolChatSettingsResource& v) { 
    j["data"] = v.data;
  }
  static void from_json(const json& j, LolChatSettingsResource& v) { 
    v.data = j.at("data").get<json>(); 
  }
} 