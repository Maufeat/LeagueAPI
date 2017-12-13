#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct PlayerNotificationResource { 
    std::string source;
    uint64_t id;
    std::string iconUrl;
    std::string detailKey;
    std::string titleKey;
    std::string state;
    bool critical;
    bool dismissible;
    std::map<std::string, std::string> data;
    std::string type;
    std::string created;
    std::string expires;
    std::string backgroundUrl; 
  };
  void to_json(json& j, const PlayerNotificationResource& v) {
  j["source"] = v.source; 
  j["id"] = v.id; 
  j["iconUrl"] = v.iconUrl; 
  j["detailKey"] = v.detailKey; 
  j["titleKey"] = v.titleKey; 
  j["state"] = v.state; 
  j["critical"] = v.critical; 
  j["dismissible"] = v.dismissible; 
  j["data"] = v.data; 
  j["type"] = v.type; 
  j["created"] = v.created; 
  j["expires"] = v.expires; 
  j["backgroundUrl"] = v.backgroundUrl; 
  }
  void from_json(const json& j, PlayerNotificationResource& v) {
  v.source = j.at("source").get<std::string>(); 
  v.id = j.at("id").get<uint64_t>(); 
  v.iconUrl = j.at("iconUrl").get<std::string>(); 
  v.detailKey = j.at("detailKey").get<std::string>(); 
  v.titleKey = j.at("titleKey").get<std::string>(); 
  v.state = j.at("state").get<std::string>(); 
  v.critical = j.at("critical").get<bool>(); 
  v.dismissible = j.at("dismissible").get<bool>(); 
  v.data = j.at("data").get<std::map<std::string, std::string>>(); 
  v.type = j.at("type").get<std::string>(); 
  v.created = j.at("created").get<std::string>(); 
  v.expires = j.at("expires").get<std::string>(); 
  v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
  }
}