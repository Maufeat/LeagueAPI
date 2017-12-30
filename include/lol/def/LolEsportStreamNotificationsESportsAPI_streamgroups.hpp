#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups { 
    std::string title;
    int64_t id;
    std::string slug;
    std::string content;
    bool live; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups& v) {
    j["title"] = v.title; 
    j["id"] = v.id; 
    j["slug"] = v.slug; 
    j["content"] = v.content; 
    j["live"] = v.live; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportsAPI_streamgroups& v) {
    v.title = j.at("title").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
    v.slug = j.at("slug").get<std::string>(); 
    v.content = j.at("content").get<std::string>(); 
    v.live = j.at("live").get<bool>(); 
  }
}