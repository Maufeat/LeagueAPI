#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct LolGeoinfoWhereAmIRequest { /**/ 
    std::string ipAddress;/**/
  };
  static void to_json(json& j, const LolGeoinfoWhereAmIRequest& v) { 
    j["ipAddress"] = v.ipAddress;
  }
  static void from_json(const json& j, LolGeoinfoWhereAmIRequest& v) { 
    v.ipAddress = j.at("ipAddress").get<std::string>(); 
  }
} 