#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreNotification { 
    std::string backgroundUrl;
    std::string iconUrl;
    std::string source;
    std::string state;
    std::map<std::string, std::string> data;
    bool critical;
    uint64_t id;
    std::string type;
    std::string titleKey;
    std::string created;
    std::string detailKey;
    std::string expires;
    bool dismissible; 
  };
  inline void to_json(json& j, const LolStoreNotification& v) {
    j["backgroundUrl"] = v.backgroundUrl; 
    j["iconUrl"] = v.iconUrl; 
    j["source"] = v.source; 
    j["state"] = v.state; 
    j["data"] = v.data; 
    j["critical"] = v.critical; 
    j["id"] = v.id; 
    j["type"] = v.type; 
    j["titleKey"] = v.titleKey; 
    j["created"] = v.created; 
    j["detailKey"] = v.detailKey; 
    j["expires"] = v.expires; 
    j["dismissible"] = v.dismissible; 
  }
  inline void from_json(const json& j, LolStoreNotification& v) {
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
    v.source = j.at("source").get<std::string>(); 
    v.state = j.at("state").get<std::string>(); 
    v.data = j.at("data").get<std::map<std::string, std::string>>(); 
    v.critical = j.at("critical").get<bool>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.type = j.at("type").get<std::string>(); 
    v.titleKey = j.at("titleKey").get<std::string>(); 
    v.created = j.at("created").get<std::string>(); 
    v.detailKey = j.at("detailKey").get<std::string>(); 
    v.expires = j.at("expires").get<std::string>(); 
    v.dismissible = j.at("dismissible").get<bool>(); 
  }
}