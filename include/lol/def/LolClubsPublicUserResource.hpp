#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolClubsPublicUserResource { 
    uint64_t id;
    std::string name;
    int32_t icon;
    std::string availability;
    std::optional<std::string> lastSeenOnlineTimestamp;
    std::map<std::string, std::string> lol; 
  };
  inline void to_json(json& j, const LolClubsPublicUserResource& v) {
    j["id"] = v.id; 
    j["name"] = v.name; 
    j["icon"] = v.icon; 
    j["availability"] = v.availability; 
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
    j["lol"] = v.lol; 
  }
  inline void from_json(const json& j, LolClubsPublicUserResource& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.name = j.at("name").get<std::string>(); 
    v.icon = j.at("icon").get<int32_t>(); 
    v.availability = j.at("availability").get<std::string>(); 
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::optional<std::string>>(); 
    v.lol = j.at("lol").get<std::map<std::string, std::string>>(); 
  }
}