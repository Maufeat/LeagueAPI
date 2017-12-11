#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RecofrienderActionResource { /**/ 
    std::string action;/**/
    uint64_t accountId;/**/
    std::string platformId;/**/
  };
  static void to_json(json& j, const RecofrienderActionResource& v) { 
    j["action"] = v.action;
    j["accountId"] = v.accountId;
    j["platformId"] = v.platformId;
  }
  static void from_json(const json& j, RecofrienderActionResource& v) { 
    v.action = j.at("action").get<std::string>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
} 