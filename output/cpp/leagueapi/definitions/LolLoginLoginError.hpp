#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolLoginLoginError { /**/ 
    std::string messageId;/**/
    std::string id;/**/
    std::string description;/**/
  };
  static void to_json(json& j, const LolLoginLoginError& v) { 
    j["messageId"] = v.messageId;
    j["id"] = v.id;
    j["description"] = v.description;
  }
  static void from_json(const json& j, LolLoginLoginError& v) { 
    v.messageId = j.at("messageId").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
  }
} 