#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEsportStreamNotificationsPlayerNotificationResource { 
    std::string titleKey;
    std::string type;
    std::string iconUrl;
    std::string source;
    uint64_t id;
    std::string state;
    std::string detailKey;
    std::map<std::string, std::string> data;
    std::string backgroundUrl;
    bool critical;
    std::string expires; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsPlayerNotificationResource& v) {
    j["titleKey"] = v.titleKey; 
    j["type"] = v.type; 
    j["iconUrl"] = v.iconUrl; 
    j["source"] = v.source; 
    j["id"] = v.id; 
    j["state"] = v.state; 
    j["detailKey"] = v.detailKey; 
    j["data"] = v.data; 
    j["backgroundUrl"] = v.backgroundUrl; 
    j["critical"] = v.critical; 
    j["expires"] = v.expires; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsPlayerNotificationResource& v) {
    v.titleKey = j.at("titleKey").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.source = j.at("source").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.state = j.at("state").get<std::string>(); 
    v.detailKey = j.at("detailKey").get<std::string>(); 
    v.data = j.at("data").get<std::map<std::string, std::string>>(); 
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
    v.critical = j.at("critical").get<bool>(); 
    v.expires = j.at("expires").get<std::string>(); 
  }
}