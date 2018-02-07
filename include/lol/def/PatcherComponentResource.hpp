#pragma once
#include "../base_def.hpp" 
#include "PatcherHeaderEntry.hpp"
#include "PatcherComponentResourceType.hpp"
#include "PatcherComponentResourceHistory.hpp"
namespace lol {
  struct PatcherComponentResource { 
    std::string id;
    PatcherComponentResourceType type;
    PatcherComponentResourceHistory history;
    std::string install_dir;
    bool use_tls;
    bool copy_to_solution;
    std::string hostname;
    std::string remote_path;
    std::string region;
    std::string locale;
    std::vector<PatcherHeaderEntry> headers; 
  };
  inline void to_json(json& j, const PatcherComponentResource& v) {
    j["id"] = v.id; 
    j["type"] = v.type; 
    j["history"] = v.history; 
    j["install_dir"] = v.install_dir; 
    j["use_tls"] = v.use_tls; 
    j["copy_to_solution"] = v.copy_to_solution; 
    j["hostname"] = v.hostname; 
    j["remote_path"] = v.remote_path; 
    j["region"] = v.region; 
    j["locale"] = v.locale; 
    j["headers"] = v.headers; 
  }
  inline void from_json(const json& j, PatcherComponentResource& v) {
    v.id = j.at("id").get<std::string>(); 
    v.type = j.at("type").get<PatcherComponentResourceType>(); 
    v.history = j.at("history").get<PatcherComponentResourceHistory>(); 
    v.install_dir = j.at("install_dir").get<std::string>(); 
    v.use_tls = j.at("use_tls").get<bool>(); 
    v.copy_to_solution = j.at("copy_to_solution").get<bool>(); 
    v.hostname = j.at("hostname").get<std::string>(); 
    v.remote_path = j.at("remote_path").get<std::string>(); 
    v.region = j.at("region").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry>>(); 
  }
}