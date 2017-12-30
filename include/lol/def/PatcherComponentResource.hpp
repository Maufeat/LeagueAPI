#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentResourceType.hpp"
#include "PatcherComponentResourceHistory.hpp"
#include "PatcherHeaderEntry.hpp"
namespace lol {
  struct PatcherComponentResource { 
    bool copy_to_solution;
    std::string install_dir;
    std::string id;
    std::vector<PatcherHeaderEntry> headers;
    std::string remote_path;
    std::string hostname;
    std::string locale;
    PatcherComponentResourceType type;
    std::string region;
    bool use_tls;
    PatcherComponentResourceHistory history; 
  };
  inline void to_json(json& j, const PatcherComponentResource& v) {
    j["copy_to_solution"] = v.copy_to_solution; 
    j["install_dir"] = v.install_dir; 
    j["id"] = v.id; 
    j["headers"] = v.headers; 
    j["remote_path"] = v.remote_path; 
    j["hostname"] = v.hostname; 
    j["locale"] = v.locale; 
    j["type"] = v.type; 
    j["region"] = v.region; 
    j["use_tls"] = v.use_tls; 
    j["history"] = v.history; 
  }
  inline void from_json(const json& j, PatcherComponentResource& v) {
    v.copy_to_solution = j.at("copy_to_solution").get<bool>(); 
    v.install_dir = j.at("install_dir").get<std::string>(); 
    v.id = j.at("id").get<std::string>(); 
    v.headers = j.at("headers").get<std::vector<PatcherHeaderEntry>>(); 
    v.remote_path = j.at("remote_path").get<std::string>(); 
    v.hostname = j.at("hostname").get<std::string>(); 
    v.locale = j.at("locale").get<std::string>(); 
    v.type = j.at("type").get<PatcherComponentResourceType>(); 
    v.region = j.at("region").get<std::string>(); 
    v.use_tls = j.at("use_tls").get<bool>(); 
    v.history = j.at("history").get<PatcherComponentResourceHistory>(); 
  }
}