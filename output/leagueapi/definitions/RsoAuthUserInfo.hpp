#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RsoAuthUserInfo { /**/ 
    std::string userInfo;/**/
  };
  static void to_json(json& j, const RsoAuthUserInfo& v) { 
    j["userInfo"] = v.userInfo;
  }
  static void from_json(const json& j, RsoAuthUserInfo& v) { 
    v.userInfo = j.at("userInfo").get<std::string>(); 
  }
} 