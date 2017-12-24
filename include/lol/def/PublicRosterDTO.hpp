#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PublicRosterDTO { 
    std::string shortName;
    int32_t logoColor;
    std::string name;
    int64_t id;
    std::vector<uint64_t> memberIds;
    int32_t logo; 
  };
  inline void to_json(json& j, const PublicRosterDTO& v) {
    j["shortName"] = v.shortName; 
    j["logoColor"] = v.logoColor; 
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["memberIds"] = v.memberIds; 
    j["logo"] = v.logo; 
  }
  inline void from_json(const json& j, PublicRosterDTO& v) {
    v.shortName = j.at("shortName").get<std::string>(); 
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.memberIds = j.at("memberIds").get<std::vector<uint64_t>>(); 
    v.logo = j.at("logo").get<int32_t>(); 
  }
}