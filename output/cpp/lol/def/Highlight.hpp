#pragma once
#include<lol/base_def.hpp> 
namespace lol {
  struct Highlight { 
    std::string filepath;
    std::string mtimeIso8601;
    uint64_t mtimeMsUtc;
    uint64_t fileSizeBytes;
    std::string name;
    std::string url;
    uint64_t id; 
  };
  void to_json(json& j, const Highlight& v) {
  j["filepath"] = v.filepath; 
  j["mtimeIso8601"] = v.mtimeIso8601; 
  j["mtimeMsUtc"] = v.mtimeMsUtc; 
  j["fileSizeBytes"] = v.fileSizeBytes; 
  j["name"] = v.name; 
  j["url"] = v.url; 
  j["id"] = v.id; 
  }
  void from_json(const json& j, Highlight& v) {
  v.filepath = j.at("filepath").get<std::string>(); 
  v.mtimeIso8601 = j.at("mtimeIso8601").get<std::string>(); 
  v.mtimeMsUtc = j.at("mtimeMsUtc").get<uint64_t>(); 
  v.fileSizeBytes = j.at("fileSizeBytes").get<uint64_t>(); 
  v.name = j.at("name").get<std::string>(); 
  v.url = j.at("url").get<std::string>(); 
  v.id = j.at("id").get<uint64_t>(); 
  }
}