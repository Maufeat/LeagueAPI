#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct RsoAuthRSOJWTConfig { /**/ 
    std::optional<std::string> token;/**/
  };
  static void to_json(json& j, const RsoAuthRSOJWTConfig& v) { 
    j["token"] = v.token;
  }
  static void from_json(const json& j, RsoAuthRSOJWTConfig& v) { 
    v.token = j.at("token").get<std::optional<std::string>>(); 
  }
} 