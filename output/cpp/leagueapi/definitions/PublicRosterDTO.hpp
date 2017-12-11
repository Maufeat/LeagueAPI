#pragma once
#include <leagueapi/base.hpp>

namespace leagueapi {
  struct PublicRosterDTO { /**/ 
    std::vector<uint64_t> memberIds;/**/
    int32_t logo;/**/
    std::string shortName;/**/
    int64_t id;/**/
    std::string name;/**/
    int32_t logoColor;/**/
  };
  static void to_json(json& j, const PublicRosterDTO& v) { 
    j["memberIds"] = v.memberIds;
    j["logo"] = v.logo;
    j["shortName"] = v.shortName;
    j["id"] = v.id;
    j["name"] = v.name;
    j["logoColor"] = v.logoColor;
  }
  static void from_json(const json& j, PublicRosterDTO& v) { 
    v.memberIds = j.at("memberIds").get<std::vector<uint64_t>>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
  }
} 