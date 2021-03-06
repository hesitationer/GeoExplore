/**
 * @file    FilesystemUtilities.hpp
 * @author  Marvin Smith
 * @date    5/11/2014
*/
#ifndef __GEOEXPLORE_UTILITIES_FILESYSTEMUTILITIES_HPP__
#define __GEOEXPLORE_UTILITIES_FILESYSTEMUTILITIES_HPP__

/// C++ Standard Libraries
#include <string>

/// Boost C++ Libraries
#include <boost/filesystem.hpp>


namespace GEO{
namespace FS{

/**
 * @class FileType
*/
enum class FileType{
    UNKNOWN,
    JPEG,
    JPEG2000,
    PNG,
    NITF,
    DTED,
    SRTM,
};

/**
 * Get File Type
*/
FileType getFileType( const boost::filesystem::path& pathname );

} /// End of FS Namespace
} /// End of GEO Namespace

#endif

