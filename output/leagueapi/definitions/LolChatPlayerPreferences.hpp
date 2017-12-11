#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolChatPlayerPreferences { /**/ 
    std::string type;/**/
    std::string hash;/**/
    uint64_t modified;/**/
    std::string data;/**/
  };
  static void to_json(json& j, const LolChatPlayerPreferences& v) { 
    j["type"] = v.type;
    j["hash"] = v.hash;
    j["modified"] = v.modified;
    j["data"] = v.data;
  }
  static void from_json(const json& j, LolChatPlayerPreferences& v) { 
    v.type = j.at("type").get<std::string>(); 
    v.hash = j.at("hash").get<std::string>(); 
    v.modified = j.at("modified").get<uint64_t>(); 
    v.data = j.at("data").get<std::string>(); 
  }
} 