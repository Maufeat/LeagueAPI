#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct ClubsNotificationResource { 
    std::string backgroundUrl;
    std::string created;
    bool critical;
    std::map<std::string, std::string> data;
    std::string detailKey;
    std::string expires;
    std::string iconUrl;
    uint64_t id;
    std::string source;
    std::string state;
    std::string titleKey;
    std::string type; 
  };
  inline void to_json(json& j, const ClubsNotificationResource& v) {
    j["backgroundUrl"] = v.backgroundUrl; 
    j["created"] = v.created; 
    j["critical"] = v.critical; 
    j["data"] = v.data; 
    j["detailKey"] = v.detailKey; 
    j["expires"] = v.expires; 
    j["iconUrl"] = v.iconUrl; 
    j["id"] = v.id; 
    j["source"] = v.source; 
    j["state"] = v.state; 
    j["titleKey"] = v.titleKey; 
    j["type"] = v.type; 
  }
  inline void from_json(const json& j, ClubsNotificationResource& v) {
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
    v.created = j.at("created").get<std::string>(); 
    v.critical = j.at("critical").get<bool>(); 
    v.data = j.at("data").get<std::map<std::string, std::string>>(); 
    v.detailKey = j.at("detailKey").get<std::string>(); 
    v.expires = j.at("expires").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.source = j.at("source").get<std::string>(); 
    v.state = j.at("state").get<std::string>(); 
    v.titleKey = j.at("titleKey").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
  }
}