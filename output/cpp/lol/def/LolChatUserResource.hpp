#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolChatUserResource { 
    std::map<std::string, std::string> lol;
    int32_t icon;
    std::optional<std::string> statusMessage;
    std::optional<std::string> lastSeenOnlineTimestamp;
    std::string name;
    std::string availability;
    uint64_t id; 
  };
  void to_json(json& j, const LolChatUserResource& v) {
  j["lol"] = v.lol; 
  j["icon"] = v.icon; 
  j["statusMessage"] = v.statusMessage; 
  j["lastSeenOnlineTimestamp"] = v.lastSeenOnlineTimestamp; 
  j["name"] = v.name; 
  j["availability"] = v.availability; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, LolChatUserResource& v) {
  v.lol = j.at("lol").get<std::map<std::string, std::string>>(); 
  v.icon = j.at("icon").get<int32_t>(); 
  v.statusMessage = j.at("statusMessage").get<std::optional<std::string>>(); 
  v.lastSeenOnlineTimestamp = j.at("lastSeenOnlineTimestamp").get<std::optional<std::string>>(); 
  v.name = j.at("name").get<std::string>(); 
  v.availability = j.at("availability").get<std::string>(); 
  v.id = j.at("id").get<uint64_t>(); 
  }
}