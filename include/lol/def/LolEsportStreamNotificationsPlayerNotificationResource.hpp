#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsPlayerNotificationResource { 
    uint64_t id;
    std::map<std::string, std::string> data;
    std::string detailKey;
    std::string backgroundUrl;
    std::string titleKey;
    std::string state;
    std::string type;
    std::string expires;
    std::string iconUrl;
    std::string source;
    bool critical; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsPlayerNotificationResource& v) {
    j["id"] = v.id; 
    j["data"] = v.data; 
    j["detailKey"] = v.detailKey; 
    j["backgroundUrl"] = v.backgroundUrl; 
    j["titleKey"] = v.titleKey; 
    j["state"] = v.state; 
    j["type"] = v.type; 
    j["expires"] = v.expires; 
    j["iconUrl"] = v.iconUrl; 
    j["source"] = v.source; 
    j["critical"] = v.critical; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsPlayerNotificationResource& v) {
    v.id = j.at("id").get<uint64_t>(); 
    v.data = j.at("data").get<std::map<std::string, std::string>>(); 
    v.detailKey = j.at("detailKey").get<std::string>(); 
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
    v.titleKey = j.at("titleKey").get<std::string>(); 
    v.state = j.at("state").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.expires = j.at("expires").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.source = j.at("source").get<std::string>(); 
    v.critical = j.at("critical").get<bool>(); 
  }
}