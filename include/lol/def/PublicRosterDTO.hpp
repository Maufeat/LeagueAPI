#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PublicRosterDTO { 
    std::string name;
    int32_t logo;
    int64_t id;
    std::string shortName;
    std::vector<uint64_t> memberIds;
    int32_t logoColor; 
  };
  inline void to_json(json& j, const PublicRosterDTO& v) {
    j["name"] = v.name; 
    j["logo"] = v.logo; 
    j["id"] = v.id; 
    j["shortName"] = v.shortName; 
    j["memberIds"] = v.memberIds; 
    j["logoColor"] = v.logoColor; 
  }
  inline void from_json(const json& j, PublicRosterDTO& v) {
    v.name = j.at("name").get<std::string>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.memberIds = j.at("memberIds").get<std::vector<uint64_t>>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
  }
}