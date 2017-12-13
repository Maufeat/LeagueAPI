#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PublicRosterDTO { 
    int32_t logoColor;
    int32_t logo;
    std::vector<uint64_t> memberIds;
    std::string name;
    std::string shortName;
    int64_t id; 
  };
  void to_json(json& j, const PublicRosterDTO& v) {
    j["logoColor"] = v.logoColor; 
    j["logo"] = v.logo; 
    j["memberIds"] = v.memberIds; 
    j["name"] = v.name; 
    j["shortName"] = v.shortName; 
    j["id"] = v.id; 
  }
  void from_json(const json& j, PublicRosterDTO& v) {
    v.logoColor = j.at("logoColor").get<int32_t>(); 
    v.logo = j.at("logo").get<int32_t>(); 
    v.memberIds = j.at("memberIds").get<std::vector<uint64_t>>(); 
    v.name = j.at("name").get<std::string>(); 
    v.shortName = j.at("shortName").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}