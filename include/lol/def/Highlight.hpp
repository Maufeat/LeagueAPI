#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct Highlight { 
    std::string name;
    std::string filepath;
    uint64_t id;
    std::string url;
    std::string mtimeIso8601;
    uint64_t mtimeMsUtc;
    uint64_t fileSizeBytes; 
  };
  inline void to_json(json& j, const Highlight& v) {
    j["name"] = v.name; 
    j["filepath"] = v.filepath; 
    j["id"] = v.id; 
    j["url"] = v.url; 
    j["mtimeIso8601"] = v.mtimeIso8601; 
    j["mtimeMsUtc"] = v.mtimeMsUtc; 
    j["fileSizeBytes"] = v.fileSizeBytes; 
  }
  inline void from_json(const json& j, Highlight& v) {
    v.name = j.at("name").get<std::string>(); 
    v.filepath = j.at("filepath").get<std::string>(); 
    v.id = j.at("id").get<uint64_t>(); 
    v.url = j.at("url").get<std::string>(); 
    v.mtimeIso8601 = j.at("mtimeIso8601").get<std::string>(); 
    v.mtimeMsUtc = j.at("mtimeMsUtc").get<uint64_t>(); 
    v.fileSizeBytes = j.at("fileSizeBytes").get<uint64_t>(); 
  }
}