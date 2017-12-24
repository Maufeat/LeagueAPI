#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolStoreNotification { 
    bool critical;
    std::string backgroundUrl;
    bool dismissible;
    std::string source;
    std::string detailKey;
    std::string expires;
    std::string created;
    uint64_t id;
    std::string state;
    std::string type;
    std::string titleKey;
    std::map<std::string, std::string> data;
    std::string iconUrl; 
  };
  inline void to_json(json& j, const LolStoreNotification& v) {
    j["critical"] = v.critical; 
    j["backgroundUrl"] = v.backgroundUrl; 
    j["dismissible"] = v.dismissible; 
    j["source"] = v.source; 
    j["detailKey"] = v.detailKey; 
    j["expires"] = v.expires; 
    j["created"] = v.created; 
    j["id"] = v.id; 
    j["state"] = v.state; 
    j["type"] = v.type; 
    j["titleKey"] = v.titleKey; 
    j["data"] = v.data; 
    j["iconUrl"] = v.iconUrl; 
  }
  inline void from_json(const json& j, LolStoreNotification& v) {
    v.critical = j.at("critical").get<bool>(); 
    v.backgroundUrl = j.at("backgroundUrl").get<std::string>(); 
    v.dismissible = j.at("dismissible").get<bool>(); 
    v.source = j.at("source").get<std::string>(); 
    v.detailKey = j.at("detailKey").get<std::string>(); 
    v.expires = j.at("expires").get<std::string>(); 
    v.created = j.at("created").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.state = j.at("state").get<std::string>(); 
    v.type = j.at("type").get<std::string>(); 
    v.titleKey = j.at("titleKey").get<std::string>(); 
    v.data = j.at("data").get<std::map<std::string, std::string>>(); 
    v.iconUrl = j.at("iconUrl").get<std::string>(); 
  }
}