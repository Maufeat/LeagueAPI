#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct LolEsportStreamNotificationsESportsAPI_streamgroups { 
    bool live;
    std::string slug;
    std::string content;
    std::string title;
    int64_t id; 
  };
  inline void to_json(json& j, const LolEsportStreamNotificationsESportsAPI_streamgroups& v) {
    j["live"] = v.live; 
    j["slug"] = v.slug; 
    j["content"] = v.content; 
    j["title"] = v.title; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolEsportStreamNotificationsESportsAPI_streamgroups& v) {
    v.live = j.at("live").get<bool>(); 
    v.slug = j.at("slug").get<std::string>(); 
    v.content = j.at("content").get<std::string>(); 
    v.title = j.at("title").get<std::string>(); 
    v.id = j.at("id").get<int64_t>(); 
  }
}