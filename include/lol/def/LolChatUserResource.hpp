#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolChatUserResource { 
    std::string name;
    uint64_t id;
    std::string availability;
    std::optional<std::string> statusMessage;
    int32_t icon;
    std::map<std::string, std::string> lol;
    std::optional<std::string> lastSeenOnlineTimestamp; 
  };
  inline void to_json(json& j, const LolChatUserResource& v) {
    j["name"] = v.name; 
    j["id"] = v.id; 
    j["availability"] = v.availability; 
    if(v.statusMessage)
      j["statusMessage"] = *v.statusMessage;
    j["icon"] = v.icon; 
    j["lol"] = v.lol; 
    if(v.lastSeenOnlineTimestamp)
      j["lastSeenOnlineTimestamp"] = *v.lastSeenOnlineTimestamp;
  }
  inline void from_json(const json& j, LolChatUserResource& v) {
    v.name = j.at("name").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.availability = j.at("availability").get<std::string>(); 
    if(auto it = j.find("statusMessage"); it != j.end() && !it->is_null())
      v.statusMessage = it->get<std::optional<std::string>>(); 
    v.icon = j.at("icon").get<int32_t>(); 
    v.lol = j.at("lol").get<std::map<std::string, std::string>>(); 
    if(auto it = j.find("lastSeenOnlineTimestamp"); it != j.end() && !it->is_null())
      v.lastSeenOnlineTimestamp = it->get<std::optional<std::string>>(); 
  }
}