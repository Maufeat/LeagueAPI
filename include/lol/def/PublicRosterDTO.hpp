#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PublicRosterDTO { 
    int64_t id;
    std::string name;
    std::string shortName;
    int32_t logo;
    int32_t logoColor;
    std::vector<uint64_t> memberIds; 
  };
  inline void to_json(json& j, const PublicRosterDTO& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["logo"] = v.logo; 
    j["logoColor"] = v.logoColor; 
    j["memberIds"] = v.memberIds; 
  }
  inline void from_json(const json& j, PublicRosterDTO& v) {
    v.id = j.at("id").get<int64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.memberIds = j.at("memberIds").get<std::vector<uint64_t>>(); 
  }
}