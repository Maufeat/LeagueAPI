#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct PlayerNotificationResource { 
    std::string created;
    std::string detailKey;
    std::string backgroundUrl;
    std::string titleKey;
    std::string state;
    std::string type;
    std::string iconUrl;
    std::map<std::string, std::string> data;
    uint64_t id;
    std::string expires;
    bool dismissible;
    std::string source;
    bool critical; 
  };
  inline void to_json(json& j, const PlayerNotificationResource& v) {
    j["created"] = v.created; 
    j["detailKey"] = v.detailKey; 
    j["backgroundUrl"] = v.backgroundUrl; 
    j["titleKey"] = v.titleKey; 
    j["state"] = v.state; 
    j["type"] = v.type; 
    j["iconUrl"] = v.iconUrl; 
    j["data"] = v.data; 
    j["id"] = v.id; 
    j["expires"] = v.expires; 
    j["dismissible"] = v.dismissible; 
    j["source"] = v.source; 
    j["critical"] = v.critical; 
  }
  inline void from_json(const json& j, PlayerNotificationResource& v) {
    v.created = j.at("created").get<std::string>(); 
    v.detailKey = j.at("detailKey").get<std::string>(); 
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
    v.titleKey = j.at("titleKey").get<std::string>(); 
    v.state = j.at("state").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.data = j.at("data").get<std::map<std::string, std::string>>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.expires = j.at("expires").get<std::string>(); 
    v.dismissible = j.at("dismissible").get<bool>(); 
    v.source = j.at("source").get<std::string>(); 
    v.critical = j.at("critical").get<bool>(); 
  }
}