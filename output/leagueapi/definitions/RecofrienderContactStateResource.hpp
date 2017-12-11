#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RecofrienderContactStateResource { /**/ 
    std::string action;/**/
    uint64_t accountId;/**/
    std::string displayState;/**/
  };
  static void to_json(json& j, const RecofrienderContactStateResource& v) { 
    j["action"] = v.action;
    j["accountId"] = v.accountId;
    j["displayState"] = v.displayState;
  }
  static void from_json(const json& j, RecofrienderContactStateResource& v) { 
    v.action = j.at("action").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.displayState = j.at("displayState").get<std::string>(); 
  }
} 